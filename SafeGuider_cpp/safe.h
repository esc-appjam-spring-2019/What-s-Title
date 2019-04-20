#ifndef SAFE_H
#define SAFE_H

#include <QWidget>

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

private:
    Ui::Safe *ui;
};

#endif // SAFE_H
