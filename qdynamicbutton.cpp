#include "qdynamicbutton.h"


QDynamicButton::QDynamicButton(QWidget *parent) : QPushButton(parent)
{

    buttonID = counterID;
    counterID++;
}

QDynamicButton::~QDynamicButton()
{

}

int QDynamicButton::getID()
{
    return buttonID;
}

int QDynamicButton::counterID = 0;
