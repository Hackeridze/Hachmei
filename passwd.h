#ifndef PASSWD_H
#define PASSWD_H

#include <QDialog>

namespace Ui {
    class passwd;
}

class passwd : public QDialog
{
    Q_OBJECT

public:
    explicit passwd(QWidget *parent = 0);
    ~passwd();

private:
    Ui::passwd *ui;
    bool CheckPassword();
private slots:
    void OkClicked();
    void CancelCliked();
};

#endif // PASSWD_H
