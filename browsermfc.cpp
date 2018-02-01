#include "browsermfc.h"
#include "ui_browsermfc.h"


BrowserMFC::BrowserMFC(QWidget *parent) :
    QWidget(parent, Qt::Window | Qt::FramelessWindowHint),
    ui(new Ui::BrowserMFC)
{
    setFixedWidth(QApplication::desktop()->availableGeometry().width());
    setFixedHeight(QApplication::desktop()->availableGeometry().height()+39);
    QProcess::execute("taskkill /f /im explorer.exe"); //Убиваем пуск
    ui->setupUi(this);
    ui->view->load(QUrl("https://www.gosuslugi.ru/"));
    connect(WR->timer,SIGNAL(timeout()),SLOT(clearCookie()));
    WR->startTimer(10*60*1000);     //Устанавливаем время сброса кукисов
    createBtns();
    //Определяем устанновленный язык
    if((HKL)0x4190409 == GetKeyboardLayout(0))
        ui->btn_ln->setText("EN");
    else
        ui->btn_ln->setText("RU");
}

BrowserMFC::~BrowserMFC()
{
    delete ui;
}

// Открыть/закрыть меню
void BrowserMFC::on_btn_menu_clicked()
{
    if(!opened)
        openMenu();
    else
        closeMenu();
}

//Действие при нажатии выбраного сайта
void BrowserMFC::btn_link_clicked()
{
    QDynamicButton *btn = (QDynamicButton*) sender();
    int id = btn->getID();
    QList<QString> link = links.values();
    QList<QString> tittle = links.keys();
    ui->lbl_tittle->setText(tittle.at(id));
    ui->view->page()->profile()->cookieStore()->deleteAllCookies();
    ui->view->load(QUrl(link.at(id)));
    closeMenu();
}

//Метод инициализации кнопок меню
void BrowserMFC::createBtns()
{
    //links["tittle"] = "link";
    links["Госуслуги"] = "https://www.gosuslugi.ru/";
    links["Налоговая"] = "https://www.nalog.ru/";
    links["Мои документы"] = "https://md.tomsk.ru/";
    links["Ваш контроль"] = "https://vashkontrol.ru/";
    links["Оценка услуг"] = "https://aismfc.mfc.tomsk.ru/mkgu";
    links["Поиск работы"] = "https://trudvsem.ru/";
    links["Консультант"] = "http://www.consultant.ru/";
    links["Пенсионный фонд РФ"] = "http://pfrf.ru/";
    links["Правовая информация"] = "http://pravo.gov.ru/";
    links["Корпорация МСП"] = "http://corpmsp.ru/";
    links["На дальний восток РФ"] = "https://надальнийвосток.рф/";

    QList<QString> tittle = links.keys();
    for(int i=0;i<tittle.size();i++){
        QDynamicButton *btn = new QDynamicButton(this);
        btn->setText(tittle.at(i));
        btn->setStyleSheet("background-color:rgb(110,69,54);color:rgb(200,152,103);border:none;border-width: 1px;border-style: outset;border-color: rgb(85, 34, 17);border-right-color: rgb(53, 21, 10);text-align: left;padding-left: 20px;");
        btn->setFont(ui->btn_menu->font());
        btn->setGeometry(0,ui->btn_menu->geometry().height(),widthbtn,0);
        connect(btn, SIGNAL(clicked()), this, SLOT(btn_link_clicked()));
        btnList.append(btn);
    }

}

//Метод открытия меню
void BrowserMFC::openMenu()
{
    for(int i=0;i<btnList.size();i++){
        QDynamicButton *btn = btnList.at(i);
        QPropertyAnimation *animation = new QPropertyAnimation(btn,"geometry");
        animation->setDuration(1000);
        animation->setEasingCurve(QEasingCurve::OutBack);
        animation->setStartValue(QRectF(0,ui->btn_menu->geometry().height(),widthbtn,0));
        animation->setEndValue(QRectF(0,ui->btn_menu->geometry().height()+(heightbtn*i),widthbtn,heightbtn));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        opened = true;
    }
}

//Метод закрытия меню
void BrowserMFC::closeMenu()
{
    for(int i=0;i<btnList.size();i++){
        QDynamicButton *btn = btnList.at(i);
        QPropertyAnimation *animation = new QPropertyAnimation(btn,"geometry");
        animation->setDuration(1000);
        animation->setEasingCurve(QEasingCurve::InBack);
        animation->setEndValue(QRectF(0,ui->btn_menu->geometry().height(),widthbtn,0));
        animation->setStartValue(QRectF(0,ui->btn_menu->geometry().height()+(heightbtn*i),widthbtn,heightbtn));
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        opened = false;
    }
}

//запустить эксплорер по закрытии приложения
void BrowserMFC::closeEvent(QCloseEvent *e)
{
    QProcess p;
    p.startDetached("C:\\Windows\\explorer.exe");

}

//00000409 — eng
//00000419 — рус

//Смена языка клавиатуры
void BrowserMFC::on_btn_ln_clicked()
{
    if((HKL)0x4190419 == GetKeyboardLayout(0))
    {
        LoadKeyboardLayout((LPCWSTR)"00000409", KLF_ACTIVATE);
        ui->btn_ln->setText("EN");
    }
    else
    {
        ActivateKeyboardLayout((HKL)HKL_PREV,KLF_ACTIVATE);
        ui->btn_ln->setText("RU");
    }
}

//Чистим кукисы для разлогина
void BrowserMFC::clearCookie()
{
    ui->view->page()->profile()->cookieStore()->deleteAllCookies();
    ui->view->reload();
}
