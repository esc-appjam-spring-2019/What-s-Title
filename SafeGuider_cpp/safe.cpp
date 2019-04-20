#include "safe.h"
#include "ui_safe.h"

enum Page{Main,SetAdr,ConnectBlue,Temp};

Safe::Safe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Safe)
{
    ui->setupUi(this);
    ui->Stacked->setCurrentIndex(Main);
    ui->DeviceList->addItem("이주용집 103동 101호");
    ui->DeviceList->addItem("양재훈집 102동 103호");
    ui->DeviceList->addItem("최승호집 105동 203호");
    ui->DeviceList->addItem("롯데백화점 3 - 2");
    ui->DeviceList->setSpacing(3);
}

Safe::~Safe()
{
    delete ui;
}

void Safe::on_BluePair_clicked()
{
    ui->Stacked->setCurrentIndex(ConnectBlue);
}

void Safe::on_SetLoc_clicked()
{
    ui->Stacked->setCurrentIndex(SetAdr);
}

void Safe::on_DeviceList_clicked(const QModelIndex &index)
{
    ui->SelectedDivice->setText(ui->DeviceList->item(index.row())->text());
}
