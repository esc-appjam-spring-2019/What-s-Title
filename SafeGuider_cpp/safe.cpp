#include "safe.h"
#include "ui_safe.h"
#include <QTime>
enum Page{Main,SetAdr,ConnectBlue,Temp, SaveMe};

unsigned int threadfunc(void* p, void *pb);


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

    strList.append(" [속보] 최승호 앱잼에서 열일하다 숨쉰채 발견");
    strList.append(" [속보] 김영찬 카트하다 졸아");
    strList.append(" [속보] 이주용 20년째 홀몸 대기록 세워");

    bFlag = true;
    pthread = new std::thread(threadfunc, ui->label_19, &bFlag);
}

Safe::~Safe()
{
    bFlag = false;
    delete ui;
    if (pthread)
    {
        pthread->join();
        delete pthread;
    }
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

void Safe::on_Cancelsetloca_clicked()
{
     ui->Stacked->setCurrentIndex(Main);
}

void Safe::on_setAddrbtn_clicked()
{
     ui->label_8->setText(strList[rand() % strList.size()]);
     ui->Stacked->setCurrentIndex(Temp);
}

void Safe::on_SaveMe_clicked()
{
     ui->label_13->setText(strList[rand() % strList.size()]);
     ui->Stacked->setCurrentIndex(SaveMe);
}

void Safe::on_Call_clicked()
{
    ui->label_15->setStyleSheet("background-color: rgb(255, 255, 255); border-radius: 15px; font: 75 14pt \"나눔스퀘어 Bold\";");
    ui->label_15->setText("요청이 완료되었습니다");
    ui->Call->hide();

}


void Safe::on_Back_clicked()
{
     ui->Stacked->setCurrentIndex(Temp);
}

void Safe::on_Call_2_clicked()
{
     ui->Stacked->setCurrentIndex(SaveMe);
}







unsigned int threadfunc(void* p, void* pb)
{
    QLabel* pLabel = (QLabel*)p;
    while (*((bool*)pb))
    {
        QString str = QTime::currentTime().toString();
        pLabel->setText(str);
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    return 0;
}
