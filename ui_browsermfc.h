/********************************************************************************
** Form generated from reading UI file 'browsermfc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSERMFC_H
#define UI_BROWSERMFC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qwebengineview.h"

QT_BEGIN_NAMESPACE

class Ui_BrowserMFC
{
public:
    QGridLayout *gridLayout;
    QLabel *lbl_tittle;
    QPushButton *btn_menu;
    QPushButton *btn_ln;
    QWebEngineView *view;

    void setupUi(QWidget *BrowserMFC)
    {
        if (BrowserMFC->objectName().isEmpty())
            BrowserMFC->setObjectName(QStringLiteral("BrowserMFC"));
        BrowserMFC->setWindowModality(Qt::WindowModal);
        BrowserMFC->resize(517, 374);
        BrowserMFC->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QStringLiteral(":/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        BrowserMFC->setWindowIcon(icon);
        gridLayout = new QGridLayout(BrowserMFC);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbl_tittle = new QLabel(BrowserMFC);
        lbl_tittle->setObjectName(QStringLiteral("lbl_tittle"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(46);
        sizePolicy.setVerticalStretch(46);
        sizePolicy.setHeightForWidth(lbl_tittle->sizePolicy().hasHeightForWidth());
        lbl_tittle->setSizePolicy(sizePolicy);
        lbl_tittle->setMinimumSize(QSize(0, 46));
        QFont font;
        font.setFamily(QStringLiteral("Constantia"));
        font.setPointSize(20);
        lbl_tittle->setFont(font);
        lbl_tittle->setStyleSheet(QLatin1String("background-color:rgb(110,69,54);\n"
"color: rgb(200,152,103);\n"
"padding-left : 20px;"));

        gridLayout->addWidget(lbl_tittle, 1, 2, 1, 1);

        btn_menu = new QPushButton(BrowserMFC);
        btn_menu->setObjectName(QStringLiteral("btn_menu"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(46);
        sizePolicy1.setVerticalStretch(46);
        sizePolicy1.setHeightForWidth(btn_menu->sizePolicy().hasHeightForWidth());
        btn_menu->setSizePolicy(sizePolicy1);
        btn_menu->setMinimumSize(QSize(128, 46));
        QPalette palette;
        QBrush brush(QColor(200, 152, 103, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(110, 69, 54, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(85, 34, 17, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        QBrush brush3(QColor(160, 160, 160, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        btn_menu->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Constantia"));
        font1.setPointSize(16);
        btn_menu->setFont(font1);
        btn_menu->setStyleSheet(QLatin1String("background-color:rgb(110,69,54);\n"
"color:rgb(200,152,103);\n"
"border:none;\n"
"border-width: 1px;\n"
"border-style: outset;\n"
"border-color: rgb(85, 34, 17);\n"
"border-right-color: rgb(53, 21, 10);\n"
"image: url(:/logo2.png);\n"
""));
        btn_menu->setChecked(false);

        gridLayout->addWidget(btn_menu, 1, 0, 1, 1);

        btn_ln = new QPushButton(BrowserMFC);
        btn_ln->setObjectName(QStringLiteral("btn_ln"));
        sizePolicy1.setHeightForWidth(btn_ln->sizePolicy().hasHeightForWidth());
        btn_ln->setSizePolicy(sizePolicy1);
        btn_ln->setMinimumSize(QSize(46, 46));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        btn_ln->setPalette(palette1);
        btn_ln->setFont(font1);
        btn_ln->setStyleSheet(QLatin1String("background-color:rgb(110,69,54);\n"
"color:rgb(200,152,103);\n"
"border:none;\n"
"border-width: 1px;\n"
"border-style: outset;\n"
"border-color: rgb(85, 34, 17);\n"
"border-right-color: rgb(53, 21, 10);\n"
""));
        btn_ln->setChecked(false);

        gridLayout->addWidget(btn_ln, 1, 3, 1, 1);

        view = new QWebEngineView(BrowserMFC);
        view->setObjectName(QStringLiteral("view"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(view->sizePolicy().hasHeightForWidth());
        view->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QStringLiteral("Modern"));
        font2.setPointSize(8);
        view->setFont(font2);

        gridLayout->addWidget(view, 3, 0, 1, 4);

        view->raise();
        btn_menu->raise();
        lbl_tittle->raise();
        btn_ln->raise();

        retranslateUi(BrowserMFC);

        QMetaObject::connectSlotsByName(BrowserMFC);
    } // setupUi

    void retranslateUi(QWidget *BrowserMFC)
    {
        BrowserMFC->setWindowTitle(QApplication::translate("BrowserMFC", "BrowserMFC", Q_NULLPTR));
        lbl_tittle->setText(QApplication::translate("BrowserMFC", "\320\223\320\276\321\201\321\203\321\201\320\273\321\203\320\263\320\270", Q_NULLPTR));
        btn_menu->setText(QString());
        btn_ln->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BrowserMFC: public Ui_BrowserMFC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSERMFC_H
