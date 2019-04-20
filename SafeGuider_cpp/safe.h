#ifndef SAFE_H
#define SAFE_H

#include <QWidget>
#include <thread>
#include <chrono>

namespace Ui {
class Safe;
}

class Safe : public QWidget
{
    Q_OBJECT

public:
    explicit Safe(QWidget *parent = 0);
    ~Safe();

private slots:
    void on_BluePair_clicked();

    void on_SetLoc_clicked();

    void on_DeviceList_clicked(const QModelIndex &index);

    void on_Cancelsetloca_clicked();

    void on_setAddrbtn_clicked();

    void on_SaveMe_clicked();

    void on_Call_clicked();

    void on_Back_clicked();

    void on_Call_2_clicked();

private:
    Ui::Safe *ui;
    QStringList strList;
    std::thread* pthread;
    bool bFlag;

};

#endif // SAFE_H
