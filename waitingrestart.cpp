#include "waitingrestart.h"
#include <QDebug>

void waitingRestart::restartTimer()
{
    if(timer->isActive())
        timer->stop();
    timer->start();

}

void waitingRestart::startTimer(int msec)
{
    connect(timer, SIGNAL(timeout()), timer, SLOT(stop()));
    connect(this, SIGNAL(hook()), SLOT(restartTimer()));
    timer->setInterval(msec);
    timer->start();
    HINSTANCE hInstance = GetModuleHandle(NULL);
    HHOOK mouseHook = SetWindowsHookEx(WH_MOUSE_LL, mouseProc, hInstance, 0);
    if(mouseHook == NULL)
        qDebug() << "waiterNOTworking!";
}


LRESULT waitingRestart::mouseProc(int Code, WPARAM wParam, LPARAM lParam)
{
    Q_UNUSED(Code)
        MOUSEHOOKSTRUCT * pMouseStruct = (MOUSEHOOKSTRUCT *)lParam;
        if(pMouseStruct != nullptr) {
            switch (wParam) {

            case WM_LBUTTONDOWN:
                getInstance()->hook();
                break;
            case WM_RBUTTONDOWN:
                getInstance()->hook();
                break;
            default:
                break;
            }
        }
        return CallNextHookEx(NULL, Code, wParam, lParam);
}

waitingRestart* waitingRestart::p_instance = 0;

