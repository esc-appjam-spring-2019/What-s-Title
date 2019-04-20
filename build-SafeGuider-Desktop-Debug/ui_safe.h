/********************************************************************************
** Form generated from reading UI file 'safe.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFE_H
#define UI_SAFE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Safe
{
public:
    QStackedWidget *Stacked;
    QWidget *MainPage;
    QFrame *MainImage;
    QLabel *Title;
    QLabel *label;
    QPushButton *BluePair;
    QPushButton *SetLoc;
    QWidget *SetAdrPage;
    QFrame *ConnectImage;
    QLabel *BlueRect;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *Cancelsetloca;
    QPushButton *setAddrbtn;
    QWidget *BluePage;
    QFrame *ConnectImage_2;
    QLineEdit *SelectedDivice;
    QLabel *label_4;
    QLabel *BlueRect_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QListWidget *DeviceList;
    QWidget *TempPage;
    QLabel *label_8;
    QLabel *Temp;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *Temp_2;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *SaveMe;
    QLabel *label_20;
    QLabel *label_21;
    QWidget *HelpPage;
    QPushButton *SaveMe_2;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *Call;
    QPushButton *Back;
    QWidget *FirePage;
    QLabel *label_18;
    QPushButton *SaveMe_3;
    QPushButton *Back_2;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *Call_2;
    QLabel *Bar;
    QLabel *label_19;

    void setupUi(QWidget *Safe)
    {
        if (Safe->objectName().isEmpty())
            Safe->setObjectName(QStringLiteral("Safe"));
        Safe->resize(800, 480);
        Safe->setMinimumSize(QSize(800, 480));
        Safe->setMaximumSize(QSize(800, 480));
        Safe->setStyleSheet(QStringLiteral("background-color: rgb(246, 246, 247);"));
        Stacked = new QStackedWidget(Safe);
        Stacked->setObjectName(QStringLiteral("Stacked"));
        Stacked->setGeometry(QRect(0, 32, 800, 447));
        MainPage = new QWidget();
        MainPage->setObjectName(QStringLiteral("MainPage"));
        MainPage->setStyleSheet(QStringLiteral(""));
        MainImage = new QFrame(MainPage);
        MainImage->setObjectName(QStringLiteral("MainImage"));
        MainImage->setGeometry(QRect(303, 46, 195, 162));
        MainImage->setStyleSheet(QStringLiteral("border-image: url(:/res/1.png);"));
        MainImage->setFrameShape(QFrame::StyledPanel);
        MainImage->setFrameShadow(QFrame::Raised);
        Title = new QLabel(MainPage);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(335, 230, 131, 21));
        Title->setStyleSheet(QStringLiteral("font: 81 13pt \"Raleway\";"));
        label = new QLabel(MainPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 260, 321, 51));
        label->setStyleSheet(QString::fromUtf8("font: 8pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\";\n"
"color: #C3CCCD"));
        BluePair = new QPushButton(MainPage);
        BluePair->setObjectName(QStringLiteral("BluePair"));
        BluePair->setGeometry(QRect(130, 360, 260, 48));
        BluePair->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 116, 204);\n"
"border-radius: 23px;\n"
"font: 75 10pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(255,255,255);"));
        SetLoc = new QPushButton(MainPage);
        SetLoc->setObjectName(QStringLiteral("SetLoc"));
        SetLoc->setGeometry(QRect(410, 360, 260, 48));
        SetLoc->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 23px;\n"
"font: 75 10pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(0,0,0);\n"
""));
        Stacked->addWidget(MainPage);
        SetAdrPage = new QWidget();
        SetAdrPage->setObjectName(QStringLiteral("SetAdrPage"));
        SetAdrPage->setStyleSheet(QStringLiteral(""));
        ConnectImage = new QFrame(SetAdrPage);
        ConnectImage->setObjectName(QStringLiteral("ConnectImage"));
        ConnectImage->setGeometry(QRect(120, 150, 283, 186));
        ConnectImage->setStyleSheet(QStringLiteral("border-image: url(:/res/undraw_confirmation_2_uy_0.png);"));
        ConnectImage->setFrameShape(QFrame::StyledPanel);
        ConnectImage->setFrameShadow(QFrame::Raised);
        BlueRect = new QLabel(SetAdrPage);
        BlueRect->setObjectName(QStringLiteral("BlueRect"));
        BlueRect->setGeometry(QRect(120, 78, 7, 27));
        BlueRect->setStyleSheet(QStringLiteral("background-color: rgb(109, 116, 204);"));
        label_2 = new QLabel(SetAdrPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(139, 71, 181, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        label_3 = new QLabel(SetAdrPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(446, 167, 151, 16));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        lineEdit = new QLineEdit(SetAdrPage);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(446, 197, 300, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264"));
        font.setPointSize(8);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(248, 248, 248);\n"
"font: 8pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\";\n"
"border-radius: 5px"));
        Cancelsetloca = new QPushButton(SetAdrPage);
        Cancelsetloca->setObjectName(QStringLiteral("Cancelsetloca"));
        Cancelsetloca->setGeometry(QRect(597, 257, 121, 40));
        Cancelsetloca->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 20px;\n"
"font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(0,0,0);\n"
""));
        setAddrbtn = new QPushButton(SetAdrPage);
        setAddrbtn->setObjectName(QStringLiteral("setAddrbtn"));
        setAddrbtn->setGeometry(QRect(466, 257, 121, 40));
        setAddrbtn->setStyleSheet(QString::fromUtf8("background-color: rgb(109, 116, 204);\n"
"border-radius: 20px;\n"
"font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(255,255,255);"));
        Stacked->addWidget(SetAdrPage);
        BluePage = new QWidget();
        BluePage->setObjectName(QStringLiteral("BluePage"));
        ConnectImage_2 = new QFrame(BluePage);
        ConnectImage_2->setObjectName(QStringLiteral("ConnectImage_2"));
        ConnectImage_2->setGeometry(QRect(120, 150, 283, 186));
        ConnectImage_2->setStyleSheet(QStringLiteral("border-image: url(:/res/undraw_confirmation_2_uy_0.png);"));
        ConnectImage_2->setFrameShape(QFrame::StyledPanel);
        ConnectImage_2->setFrameShadow(QFrame::Raised);
        SelectedDivice = new QLineEdit(BluePage);
        SelectedDivice->setObjectName(QStringLiteral("SelectedDivice"));
        SelectedDivice->setGeometry(QRect(446, 177, 261, 31));
        SelectedDivice->setFont(font);
        SelectedDivice->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(248, 248, 248);\n"
"font: 8pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\";\n"
"border-radius: 5px"));
        SelectedDivice->setReadOnly(true);
        SelectedDivice->setCursorMoveStyle(Qt::LogicalMoveStyle);
        label_4 = new QLabel(BluePage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(139, 71, 201, 41));
        label_4->setStyleSheet(QString::fromUtf8("font: 75 14pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        BlueRect_2 = new QLabel(BluePage);
        BlueRect_2->setObjectName(QStringLiteral("BlueRect_2"));
        BlueRect_2->setGeometry(QRect(120, 78, 7, 27));
        BlueRect_2->setStyleSheet(QStringLiteral("background-color: rgb(109, 116, 204);"));
        label_5 = new QLabel(BluePage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(446, 147, 151, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        label_6 = new QLabel(BluePage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(446, 216, 151, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        label_7 = new QLabel(BluePage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(560, 70, 151, 16));
        label_7->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        DeviceList = new QListWidget(BluePage);
        DeviceList->setObjectName(QStringLiteral("DeviceList"));
        DeviceList->setGeometry(QRect(446, 240, 261, 96));
        DeviceList->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(248, 248, 248);\n"
"font: 8pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\";\n"
"border-radius: 5px;\n"
"margin: 2px;"));
        Stacked->addWidget(BluePage);
        TempPage = new QWidget();
        TempPage->setObjectName(QStringLiteral("TempPage"));
        label_8 = new QLabel(TempPage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 10, 780, 31));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        Temp = new QLabel(TempPage);
        Temp->setObjectName(QStringLiteral("Temp"));
        Temp->setGeometry(QRect(219, 105, 167, 246));
        Temp->setStyleSheet(QString::fromUtf8("border-image: url(:/res/24.png);\n"
"font: 75 25pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(255,255,255);"));
        Temp->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(TempPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(255, 123, 111, 41));
        label_9->setStyleSheet(QLatin1String("\n"
"font: 81 9pt \"Raleway\";\n"
"color: rgb(255,255,255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 5px"));
        label_9->setFrameShape(QFrame::StyledPanel);
        label_9->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(TempPage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(290, 140, 111, 41));
        label_10->setStyleSheet(QString::fromUtf8("font: 7pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\";\n"
"color: ;\n"
"color: rgb(197, 197, 197);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 5px"));
        label_10->setFrameShape(QFrame::StyledPanel);
        label_10->setFrameShadow(QFrame::Raised);
        Temp_2 = new QLabel(TempPage);
        Temp_2->setObjectName(QStringLiteral("Temp_2"));
        Temp_2->setGeometry(QRect(411, 106, 167, 246));
        Temp_2->setStyleSheet(QString::fromUtf8("border-image: url(:/res/25.png);\n"
"font: 75 25pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(255,255,255);"));
        Temp_2->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(TempPage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(462, 123, 80, 41));
        label_11->setStyleSheet(QLatin1String("\n"
"font: 81 9pt \"Raleway\";\n"
"color: rgb(255,255,255);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 5px"));
        label_11->setFrameShape(QFrame::StyledPanel);
        label_11->setFrameShadow(QFrame::Raised);
        label_12 = new QLabel(TempPage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(483, 140, 111, 41));
        label_12->setStyleSheet(QString::fromUtf8("font: 7pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264\";\n"
"color: ;\n"
"color: rgb(197, 197, 197);\n"
"background-color: rgba(255, 255, 255, 0);\n"
"border-radius: 5px"));
        label_12->setFrameShape(QFrame::StyledPanel);
        label_12->setFrameShadow(QFrame::Raised);
        SaveMe = new QPushButton(TempPage);
        SaveMe->setObjectName(QStringLiteral("SaveMe"));
        SaveMe->setGeometry(QRect(300, 380, 200, 47));
        SaveMe->setStyleSheet(QString::fromUtf8("background-color: rgb(255,0,0);\n"
"border-radius: 23px;\n"
"font: 75 10pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(255,255,255);"));
        label_20 = new QLabel(TempPage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(252, 307, 191, 16));
        label_20->setStyleSheet(QLatin1String("font: 25 5pt \"Raleway\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_21 = new QLabel(TempPage);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(444, 308, 191, 16));
        label_21->setStyleSheet(QLatin1String("font: 25 5pt \"Raleway\";\n"
"background-color: rgba(255, 255, 255, 0);"));
        Stacked->addWidget(TempPage);
        HelpPage = new QWidget();
        HelpPage->setObjectName(QStringLiteral("HelpPage"));
        SaveMe_2 = new QPushButton(HelpPage);
        SaveMe_2->setObjectName(QStringLiteral("SaveMe_2"));
        SaveMe_2->setGeometry(QRect(300, 380, 200, 47));
        SaveMe_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255,0,0);\n"
"border-radius: 23px;\n"
"font: 75 10pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(255,255,255);"));
        label_13 = new QLabel(HelpPage);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 10, 780, 31));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        label_14 = new QLabel(HelpPage);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 0, 800, 448));
        label_14->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 100);"));
        label_15 = new QLabel(HelpPage);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(220, 75, 360, 250));
        label_15->setStyleSheet(QString::fromUtf8("border-image: url(:/res/28.png);\n"
"border-radius: 15px;\n"
"font: 75 14pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        label_15->setAlignment(Qt::AlignCenter);
        Call = new QPushButton(HelpPage);
        Call->setObjectName(QStringLiteral("Call"));
        Call->setGeometry(QRect(220, 270, 360, 41));
        Call->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 75 11pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"border-radius: 1px;\n"
"color: rgb(255,255,255);\n"
""));
        Back = new QPushButton(HelpPage);
        Back->setObjectName(QStringLiteral("Back"));
        Back->setGeometry(QRect(553, 88, 11, 11));
        Back->setStyleSheet(QStringLiteral("border-image: url(:/res/delete.png);"));
        Stacked->addWidget(HelpPage);
        FirePage = new QWidget();
        FirePage->setObjectName(QStringLiteral("FirePage"));
        label_18 = new QLabel(FirePage);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 10, 780, 31));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;\n"
"font: 75 9pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        SaveMe_3 = new QPushButton(FirePage);
        SaveMe_3->setObjectName(QStringLiteral("SaveMe_3"));
        SaveMe_3->setGeometry(QRect(300, 380, 200, 47));
        SaveMe_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255,0,0);\n"
"border-radius: 23px;\n"
"font: 75 10pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: rgb(255,255,255);"));
        Back_2 = new QPushButton(FirePage);
        Back_2->setObjectName(QStringLiteral("Back_2"));
        Back_2->setGeometry(QRect(553, 88, 11, 11));
        Back_2->setStyleSheet(QStringLiteral("border-image: url(:/MainImage/C:/Users/user/Desktop/Image/delete.png);"));
        label_16 = new QLabel(FirePage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(220, 75, 360, 250));
        label_16->setStyleSheet(QString::fromUtf8("border-image: url(:/res/29.png);\n"
"border-radius: 15px;\n"
"font: 75 14pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";"));
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(FirePage);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(0, 0, 800, 448));
        label_17->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 100);"));
        Call_2 = new QPushButton(FirePage);
        Call_2->setObjectName(QStringLiteral("Call_2"));
        Call_2->setGeometry(QRect(220, 270, 360, 41));
        Call_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"font: 75 11pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"border-radius: 1px;\n"
"color: rgb(255,255,255);\n"
""));
        Stacked->addWidget(FirePage);
        SaveMe_3->raise();
        label_18->raise();
        label_17->raise();
        Back_2->raise();
        label_16->raise();
        Call_2->raise();
        Bar = new QLabel(Safe);
        Bar->setObjectName(QStringLiteral("Bar"));
        Bar->setGeometry(QRect(0, 0, 800, 32));
        Bar->setStyleSheet(QLatin1String("background-color: rgb(109, 116, 204);\n"
"font: 25 9pt \"Raleway\";\n"
"color: #ffffff"));
        Bar->setScaledContents(false);
        label_19 = new QLabel(Safe);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(665, 7, 131, 21));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);;\n"
"font: 75 11pt \"\353\202\230\353\210\224\354\212\244\355\200\230\354\226\264 Bold\";\n"
"color: white;\n"
""));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(Safe);

        Stacked->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Safe);
    } // setupUi

    void retranslateUi(QWidget *Safe)
    {
        Safe->setWindowTitle(QApplication::translate("Safe", "Safe", Q_NULLPTR));
        Title->setText(QApplication::translate("Safe", "Safe Guider", Q_NULLPTR));
        label->setText(QApplication::translate("Safe", " Safe Guider\353\212\224 \355\231\224\354\236\254 \353\260\234\354\203\235 \354\233\220\354\235\270\354\235\264 \354\241\264\354\236\254\355\225\230\353\212\224\354\247\200 \354\225\214\353\240\244\354\244\215\353\213\210\353\213\244. \n"
" \353\230\220\355\225\234, \355\231\224\354\236\254 \353\260\234\354\203\235\354\213\234 \353\214\200\355\224\274 \352\262\275\353\241\234\353\245\274 \354\225\214\353\240\244\354\243\274\353\251\260, \355\203\210\354\266\234\354\235\264 \354\226\264\353\240\244\354\232\270 \354\213\234\n"
"     \354\227\220\353\212\224 \354\234\204\354\271\230\353\245\274 \354\266\224\354\240\201\355\225\230\354\227\254 \353\202\264 \354\234\204\354\271\230\353\245\274 \354\225\214\353\240\244\354\244\204 \354\210\230 \354\236\210\354\212\265\353\213\210\353\213\244.", Q_NULLPTR));
        BluePair->setText(QApplication::translate("Safe", "\353\270\224\353\243\250\355\210\254\354\212\244 \355\216\230\354\226\264\353\247\201 \354\227\260\352\262\260", Q_NULLPTR));
        SetLoc->setText(QApplication::translate("Safe", "\354\247\201\354\240\221 \354\234\204\354\271\230 \353\223\261\353\241\235\355\225\230\352\270\260", Q_NULLPTR));
        BlueRect->setText(QString());
        label_2->setText(QApplication::translate("Safe", "\354\247\201\354\240\221 \354\234\204\354\271\230 \354\204\244\354\240\225\355\225\230\352\270\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("Safe", "\354\247\221\354\243\274\354\206\214\353\245\274 \354\236\205\353\240\245\355\225\264\354\243\274\354\204\270\354\232\224", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Safe", " \354\204\270\353\266\200 \354\243\274\354\206\214\353\245\274 \354\215\250\354\243\274\354\204\270\354\232\224", Q_NULLPTR));
        Cancelsetloca->setText(QApplication::translate("Safe", "\354\267\250\354\206\214\355\225\230\352\270\260", Q_NULLPTR));
        setAddrbtn->setText(QApplication::translate("Safe", "\353\223\261\353\241\235\355\225\230\352\270\260", Q_NULLPTR));
        SelectedDivice->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("Safe", "\353\270\224\353\243\250\355\210\254\354\212\244 \355\216\230\354\226\264\353\247\201 \354\227\260\352\262\260", Q_NULLPTR));
        BlueRect_2->setText(QString());
        label_5->setText(QApplication::translate("Safe", "\353\223\261\353\241\235\352\270\260\352\270\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("Safe", "\352\270\260\355\203\200\352\270\260\352\270\260", Q_NULLPTR));
        label_7->setText(QApplication::translate("Safe", "Bluetooth", Q_NULLPTR));
        label_8->setText(QApplication::translate("Safe", "TextLabel", Q_NULLPTR));
        Temp->setText(QApplication::translate("Safe", "33\302\260\n"
"", Q_NULLPTR));
        label_9->setText(QApplication::translate("Safe", "Temperature", Q_NULLPTR));
        label_10->setText(QApplication::translate("Safe", "\354\230\250\353\217\204", Q_NULLPTR));
        Temp_2->setText(QApplication::translate("Safe", "22%\n"
"", Q_NULLPTR));
        label_11->setText(QApplication::translate("Safe", "Humidity ", Q_NULLPTR));
        label_12->setText(QApplication::translate("Safe", "\354\212\265\353\217\204", Q_NULLPTR));
        SaveMe->setText(QApplication::translate("Safe", "\352\265\254\354\241\260 \354\232\224\354\262\255", Q_NULLPTR));
        label_20->setText(QApplication::translate("Safe", "\342\223\222 Team ESC - Safe Guider", Q_NULLPTR));
        label_21->setText(QApplication::translate("Safe", "\342\223\222 Team ESC - Safe Guider", Q_NULLPTR));
        SaveMe_2->setText(QApplication::translate("Safe", "\352\265\254\354\241\260 \354\232\224\354\262\255", Q_NULLPTR));
        label_13->setText(QApplication::translate("Safe", "TextLabel", Q_NULLPTR));
        label_14->setText(QString());
        label_15->setText(QString());
        Call->setText(QApplication::translate("Safe", "\354\232\224\354\262\255\355\225\230\352\270\260", Q_NULLPTR));
        Back->setText(QString());
        label_18->setText(QApplication::translate("Safe", "TextLabel", Q_NULLPTR));
        SaveMe_3->setText(QApplication::translate("Safe", "\352\265\254\354\241\260 \354\232\224\354\262\255", Q_NULLPTR));
        Back_2->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        Call_2->setText(QApplication::translate("Safe", "\352\265\254\354\241\260 \354\232\224\354\262\255", Q_NULLPTR));
        Bar->setText(QApplication::translate("Safe", "   Safe Guider", Q_NULLPTR));
        label_19->setText(QApplication::translate("Safe", "Time", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Safe: public Ui_Safe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFE_H
