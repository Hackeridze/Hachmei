#include <QtGui/QApplication>
#include "hachmeiwindow.h"
#include "passwd.h"
#include <QStyle>
#include <QTextCodec>
int main(int argc, char *argv[])
{
    QTextCodec *RusCodec = QTextCodec::codecForName("utf-8"); // make codec
    QTextCodec::setCodecForCStrings(RusCodec); // Installing codec
    QApplication a(argc, argv);
    a.setStyle("cleanlooks");
    QIcon icon = QIcon(":/icon.png");
    a.setWindowIcon(icon);
    passwd pwdWindow;
    pwdWindow.show();
    return a.exec();
}
