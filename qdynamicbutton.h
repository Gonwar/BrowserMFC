#ifndef QDYNAMICBUTTON_H
#define QDYNAMICBUTTON_H
#include <QPushButton>

class QDynamicButton : public QPushButton
{

public:
    explicit QDynamicButton(QWidget *parent = 0);
    ~QDynamicButton();
    int getID();
    static int counterID;
private:

    int buttonID = 0;
};

#endif // QDYNAMICBUTTON_H
