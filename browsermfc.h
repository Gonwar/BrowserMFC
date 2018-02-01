#ifndef BROWSERMFC_H
#define BROWSERMFC_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QWebEnginePage>
#include <QWebEngineProfile>
#include <QWebEngineCookieStore>
#include <QProcess>
#include <QKeyEvent>
#include <QDesktopWidget>
#include "qdynamicbutton.h"
#include "waitingrestart.h"
#include "windows.h"

namespace Ui {
class BrowserMFC;
}

class BrowserMFC : public QWidget
{
    Q_OBJECT

public:
    explicit BrowserMFC(QWidget *parent = 0);
    ~BrowserMFC();
    QList<QDynamicButton*> btnList;

private slots:
    void on_btn_menu_clicked();
    void btn_link_clicked();
    void on_btn_ln_clicked();
    void clearCookie();


private:
    waitingRestart *WR = waitingRestart::getInstance();
    int widthbtn = 280, heightbtn = 50;  // Размеры кнопок всплывающего меню
    bool opened = false;    // Статус меню (false - зыкрыто, true - открыто)
    QMap<QString, QString> links;   //Информация кнопок (tittle, link)
    Ui::BrowserMFC *ui;
    void createBtns();
    void openMenu();
    void closeMenu();
    void closeEvent(QCloseEvent *e);
};

#endif // BROWSERMFC_H
