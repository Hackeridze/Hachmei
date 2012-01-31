#include <QtGui/QApplication>
#include "hachmeiwindow.h"
#include "passwd.h"
#include <QStyle>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("cleanlooks");
    QIcon icon = QIcon(":/icon.png");
    a.setWindowIcon(icon);
    passwd pwdWindow;
    pwdWindow.show();
    return a.exec();
}
