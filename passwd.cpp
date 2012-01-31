#include "passwd.h"
#include "ui_passwd.h"
#include "hachmeiwindow.h"
#include <QMessageBox>
passwd::passwd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::passwd)
{
    ui->setupUi(this);
    this->setWindowTitle(QString::fromLocal8Bit("[Hachmei] Пароль бы..."));
    connect(ui->Ok,SIGNAL(clicked()),this,SLOT(OkClicked()));
    connect(ui->Cancel,SIGNAL(clicked()),this,SLOT(CancelCliked()));
}

passwd::~passwd()
{
    delete ui;
}

void passwd::OkClicked()
{
    if (CheckPassword())
    {
        HachmeiWindow *w = new HachmeiWindow();
        w->show();
        this->close();
    }
    else
    {
        QMessageBox::critical(this,QString::fromLocal8Bit("Ошибка! :'("),QString::fromLocal8Bit(
                              "<b>Неверный пароль!</b><br> Пожалуйста, укажите верный пароль!"
                          ), QMessageBox::Ok, QMessageBox::NoButton);
        return;
    }
}

void passwd::CancelCliked()
{
    this->close();
}

bool passwd::CheckPassword()
{
    QString pwd = ui->passLine->text();
    if (pwd == QString("jupiter9281"))
    {
        return true;
    }
    else
    {
        return false;
    }
}
