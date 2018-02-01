#ifndef WAITINGRESTART_H
#define WAITINGRESTART_H
#include <QTimer>
#include "windows.h"
class waitingRestart : public QObject
{
    Q_OBJECT
    Q_DISABLE_COPY(waitingRestart)

public:
    static waitingRestart *getInstance(){
        if(!p_instance)
            p_instance = new waitingRestart();
        return p_instance;
    }
    void startTimer(int msec);
    QTimer *timer = new QTimer();

private:
    static waitingRestart * p_instance;
    waitingRestart(){}
    ~waitingRestart(){}
    static LRESULT CALLBACK mouseProc(int Code, WPARAM wParam, LPARAM lParam);

private slots:
    void restartTimer();

signals:
    void hook();


};

#endif // WAITINGRESTART_H
