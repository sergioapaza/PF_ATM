#include <QApplication>
//#include <QDesktopWidget>
#include "atm_welcome_form.h"
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ATMWelcomeForm w;
    w.show();
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    w.move(
        (screenGeometry.width() - w.width()) / 2,
        (screenGeometry.height() - w.height()) / 2
        );

    return a.exec();
}
