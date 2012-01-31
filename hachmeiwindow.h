#ifndef HACHMEIWINDOW_H
#define HACHMEIWINDOW_H

#include <QMainWindow>

namespace Ui {
    class HachmeiWindow;
}

class HachmeiWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HachmeiWindow(QWidget *parent = 0);
    ~HachmeiWindow();

private:
    Ui::HachmeiWindow *ui;
    void LoadCB();
    void SlotSignalInit();
    bool isCurrentDateValid();
    unsigned int DateConsider();
    unsigned int FIOConsider();
    unsigned int GoldConsider(unsigned int,unsigned int);
    void showData_date(unsigned int);
    void showData_fio(unsigned int);
    void showData_gold(unsigned int);
    unsigned int getCharNum(int);
    unsigned int getSummOfNumbers(unsigned int);
private slots:
    void ExitClicked();
    void About();
    void ConsiderDateButtonClicked();
    void ConsiderFIOButtonClicked();
    void ConsiderGOLDButtonClicked();
//    void MonthChanged(int);
//    void YearChanged(int);
};

#endif // HACHMEIWINDOW_H
