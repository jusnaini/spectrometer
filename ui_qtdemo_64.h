/********************************************************************************
** Form generated from reading UI file 'qtdemo_64.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDEMO_64_H
#define UI_QTDEMO_64_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plot.h"

QT_BEGIN_NAMESPACE

class Ui_Qtdemo_64Class
{
public:
    QWidget *centralWidget;
    QPushButton *OpenCommBtn;
    QPushButton *UpdateListBtn;
    QPushButton *ShowEepromBtn;
    QGroupBox *groupBox;
    QPushButton *StartMeasBtn;
    QPushButton *StopMeasBtn;
    QLineEdit *NrMeasEdt;
    QLabel *label_3;
    QCheckBox *PreScanChk;
    QPushButton *darkRef;
    QPushButton *whiteRef;
    QListWidget *listspectrum;
    QGroupBox *groupBox_2;
    QLineEdit *IntTimeEdt;
    QLineEdit *AvgEdt;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *StartPixelEdt;
    QLineEdit *StopPixelEdt;
    QLineEdit *IntDelayEdt;
    QLineEdit *SatDetEdt;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_9;
    QRadioButton *HardwareTriggerRBtn;
    QRadioButton *SoftwareTriggerRBtn;
    QGroupBox *groupBox_10;
    QRadioButton *ExternalTriggerRbtn;
    QRadioButton *SynchTriggerRBtn;
    QGroupBox *groupBox_11;
    QRadioButton *EdgeTriggerRBtn;
    QRadioButton *LevelTriggerRBtn;
    QGroupBox *groupBox_4;
    QCheckBox *DarkCorrChk;
    QLineEdit *DarkCorrPercEdt;
    QLabel *label_7;
    QGroupBox *groupBox_5;
    QLineEdit *SmoothModelEdt;
    QLineEdit *SmoothNrPixelsEdt;
    QLabel *label_8;
    QLabel *label_9;
    QGroupBox *groupBox_7;
    QLineEdit *FlashesPerScanEdt;
    QLineEdit *LaserDelayEdt;
    QLineEdit *LaserWidthEdt;
    QLineEdit *LaserWavEdt;
    QLineEdit *StoreToRamEdt;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *ReadEepromBtn;
    QPushButton *WriteEepromBtn;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QTableWidget *SpectrometerList;
    QPushButton *ActivateBtn;
    QPushButton *DeactivateBtn;
    QGroupBox *groupBox_6;
    QLineEdit *DetectorEdt;
    QLineEdit *NrPixelsEdt;
    QLineEdit *FPGAVerEdt;
    QLineEdit *FirmwareVerEdt;
    QLineEdit *DLLVerEdt;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *DigitalIoBtn;
    QPushButton *AnalogIoBtn;
    QGroupBox *groupBox_8;
    QLineEdit *TimeSinceStartEdt;
    QLineEdit *NrScansEdt;
    QLineEdit *NrFailuresEdt;
    QLineEdit *TimePerScanEdt;
    QLineEdit *LastScanEdt;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QPlainTextEdit *plainTextEdit;
    QCheckBox *DisableGraphChk;
    Plot *plot;
    QCheckBox *SaturatedChk;
    QLabel *myLabel;
    QListWidget *listWidget;
    QLineEdit *msg;
    QPushButton *send;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Qtdemo_64Class)
    {
        if (Qtdemo_64Class->objectName().isEmpty())
            Qtdemo_64Class->setObjectName(QString::fromUtf8("Qtdemo_64Class"));
        Qtdemo_64Class->resize(1038, 742);
        QFont font;
        font.setPointSize(8);
        Qtdemo_64Class->setFont(font);
        centralWidget = new QWidget(Qtdemo_64Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        OpenCommBtn = new QPushButton(centralWidget);
        OpenCommBtn->setObjectName(QString::fromUtf8("OpenCommBtn"));
        OpenCommBtn->setGeometry(QRect(20, 20, 131, 24));
        UpdateListBtn = new QPushButton(centralWidget);
        UpdateListBtn->setObjectName(QString::fromUtf8("UpdateListBtn"));
        UpdateListBtn->setGeometry(QRect(20, 50, 131, 24));
        ShowEepromBtn = new QPushButton(centralWidget);
        ShowEepromBtn->setObjectName(QString::fromUtf8("ShowEepromBtn"));
        ShowEepromBtn->setGeometry(QRect(20, 650, 131, 24));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(810, 10, 221, 361));
        StartMeasBtn = new QPushButton(groupBox);
        StartMeasBtn->setObjectName(QString::fromUtf8("StartMeasBtn"));
        StartMeasBtn->setGeometry(QRect(30, 80, 131, 24));
        StopMeasBtn = new QPushButton(groupBox);
        StopMeasBtn->setObjectName(QString::fromUtf8("StopMeasBtn"));
        StopMeasBtn->setGeometry(QRect(30, 110, 131, 24));
        NrMeasEdt = new QLineEdit(groupBox);
        NrMeasEdt->setObjectName(QString::fromUtf8("NrMeasEdt"));
        NrMeasEdt->setGeometry(QRect(30, 40, 113, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 151, 16));
        PreScanChk = new QCheckBox(groupBox);
        PreScanChk->setObjectName(QString::fromUtf8("PreScanChk"));
        PreScanChk->setGeometry(QRect(30, 160, 151, 19));
        darkRef = new QPushButton(groupBox);
        darkRef->setObjectName(QString::fromUtf8("darkRef"));
        darkRef->setGeometry(QRect(30, 200, 131, 21));
        whiteRef = new QPushButton(groupBox);
        whiteRef->setObjectName(QString::fromUtf8("whiteRef"));
        whiteRef->setGeometry(QRect(30, 240, 131, 24));
        listspectrum = new QListWidget(groupBox);
        listspectrum->setObjectName(QString::fromUtf8("listspectrum"));
        listspectrum->setGeometry(QRect(0, 280, 221, 81));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(310, 10, 491, 361));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        groupBox_2->setFont(font1);
        IntTimeEdt = new QLineEdit(groupBox_2);
        IntTimeEdt->setObjectName(QString::fromUtf8("IntTimeEdt"));
        IntTimeEdt->setGeometry(QRect(130, 70, 81, 20));
        AvgEdt = new QLineEdit(groupBox_2);
        AvgEdt->setObjectName(QString::fromUtf8("AvgEdt"));
        AvgEdt->setGeometry(QRect(130, 110, 81, 20));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 70, 121, 16));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 110, 121, 16));
        StartPixelEdt = new QLineEdit(groupBox_2);
        StartPixelEdt->setObjectName(QString::fromUtf8("StartPixelEdt"));
        StartPixelEdt->setGeometry(QRect(130, 30, 81, 20));
        StopPixelEdt = new QLineEdit(groupBox_2);
        StopPixelEdt->setObjectName(QString::fromUtf8("StopPixelEdt"));
        StopPixelEdt->setGeometry(QRect(130, 50, 81, 20));
        IntDelayEdt = new QLineEdit(groupBox_2);
        IntDelayEdt->setObjectName(QString::fromUtf8("IntDelayEdt"));
        IntDelayEdt->setGeometry(QRect(130, 90, 81, 20));
        SatDetEdt = new QLineEdit(groupBox_2);
        SatDetEdt->setObjectName(QString::fromUtf8("SatDetEdt"));
        SatDetEdt->setGeometry(QRect(130, 130, 81, 20));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 160, 211, 191));
        groupBox_3->setFont(font);
        groupBox_9 = new QGroupBox(groupBox_3);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setGeometry(QRect(10, 20, 191, 51));
        HardwareTriggerRBtn = new QRadioButton(groupBox_9);
        HardwareTriggerRBtn->setObjectName(QString::fromUtf8("HardwareTriggerRBtn"));
        HardwareTriggerRBtn->setGeometry(QRect(90, 10, 101, 18));
        SoftwareTriggerRBtn = new QRadioButton(groupBox_9);
        SoftwareTriggerRBtn->setObjectName(QString::fromUtf8("SoftwareTriggerRBtn"));
        SoftwareTriggerRBtn->setGeometry(QRect(90, 30, 101, 16));
        groupBox_10 = new QGroupBox(groupBox_3);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 70, 191, 51));
        ExternalTriggerRbtn = new QRadioButton(groupBox_10);
        ExternalTriggerRbtn->setObjectName(QString::fromUtf8("ExternalTriggerRbtn"));
        ExternalTriggerRbtn->setGeometry(QRect(90, 10, 91, 18));
        SynchTriggerRBtn = new QRadioButton(groupBox_10);
        SynchTriggerRBtn->setObjectName(QString::fromUtf8("SynchTriggerRBtn"));
        SynchTriggerRBtn->setGeometry(QRect(90, 30, 121, 18));
        groupBox_11 = new QGroupBox(groupBox_3);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        groupBox_11->setGeometry(QRect(10, 120, 191, 51));
        EdgeTriggerRBtn = new QRadioButton(groupBox_11);
        EdgeTriggerRBtn->setObjectName(QString::fromUtf8("EdgeTriggerRBtn"));
        EdgeTriggerRBtn->setGeometry(QRect(90, 10, 84, 18));
        LevelTriggerRBtn = new QRadioButton(groupBox_11);
        LevelTriggerRBtn->setObjectName(QString::fromUtf8("LevelTriggerRBtn"));
        LevelTriggerRBtn->setGeometry(QRect(90, 30, 84, 18));
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(230, 10, 251, 71));
        DarkCorrChk = new QCheckBox(groupBox_4);
        DarkCorrChk->setObjectName(QString::fromUtf8("DarkCorrChk"));
        DarkCorrChk->setGeometry(QRect(10, 20, 71, 19));
        DarkCorrPercEdt = new QLineEdit(groupBox_4);
        DarkCorrPercEdt->setObjectName(QString::fromUtf8("DarkCorrPercEdt"));
        DarkCorrPercEdt->setGeometry(QRect(10, 40, 51, 20));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 40, 46, 14));
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(230, 80, 251, 71));
        SmoothModelEdt = new QLineEdit(groupBox_5);
        SmoothModelEdt->setObjectName(QString::fromUtf8("SmoothModelEdt"));
        SmoothModelEdt->setGeometry(QRect(92, 20, 101, 20));
        SmoothNrPixelsEdt = new QLineEdit(groupBox_5);
        SmoothNrPixelsEdt->setObjectName(QString::fromUtf8("SmoothNrPixelsEdt"));
        SmoothNrPixelsEdt->setGeometry(QRect(92, 40, 101, 20));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 20, 46, 14));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 40, 61, 16));
        groupBox_7 = new QGroupBox(groupBox_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(230, 160, 251, 131));
        FlashesPerScanEdt = new QLineEdit(groupBox_7);
        FlashesPerScanEdt->setObjectName(QString::fromUtf8("FlashesPerScanEdt"));
        FlashesPerScanEdt->setGeometry(QRect(140, 20, 101, 20));
        LaserDelayEdt = new QLineEdit(groupBox_7);
        LaserDelayEdt->setObjectName(QString::fromUtf8("LaserDelayEdt"));
        LaserDelayEdt->setGeometry(QRect(140, 40, 101, 20));
        LaserWidthEdt = new QLineEdit(groupBox_7);
        LaserWidthEdt->setObjectName(QString::fromUtf8("LaserWidthEdt"));
        LaserWidthEdt->setGeometry(QRect(140, 60, 101, 20));
        LaserWavEdt = new QLineEdit(groupBox_7);
        LaserWavEdt->setObjectName(QString::fromUtf8("LaserWavEdt"));
        LaserWavEdt->setGeometry(QRect(140, 80, 101, 20));
        StoreToRamEdt = new QLineEdit(groupBox_7);
        StoreToRamEdt->setObjectName(QString::fromUtf8("StoreToRamEdt"));
        StoreToRamEdt->setGeometry(QRect(140, 100, 101, 20));
        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 20, 111, 16));
        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 40, 101, 16));
        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 60, 91, 16));
        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 80, 131, 16));
        label_14 = new QLabel(groupBox_7);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 100, 131, 16));
        ReadEepromBtn = new QPushButton(groupBox_2);
        ReadEepromBtn->setObjectName(QString::fromUtf8("ReadEepromBtn"));
        ReadEepromBtn->setGeometry(QRect(230, 300, 251, 24));
        WriteEepromBtn = new QPushButton(groupBox_2);
        WriteEepromBtn->setObjectName(QString::fromUtf8("WriteEepromBtn"));
        WriteEepromBtn->setGeometry(QRect(230, 330, 251, 24));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 30, 91, 16));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(10, 50, 81, 16));
        label_26->setFont(font);
        label_27 = new QLabel(groupBox_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(10, 90, 121, 16));
        label_28 = new QLabel(groupBox_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 130, 121, 16));
        SpectrometerList = new QTableWidget(centralWidget);
        if (SpectrometerList->columnCount() < 2)
            SpectrometerList->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        SpectrometerList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        SpectrometerList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (SpectrometerList->rowCount() < 5)
            SpectrometerList->setRowCount(5);
        SpectrometerList->setObjectName(QString::fromUtf8("SpectrometerList"));
        SpectrometerList->setGeometry(QRect(20, 90, 271, 181));
        SpectrometerList->setRowCount(5);
        SpectrometerList->setColumnCount(2);
        ActivateBtn = new QPushButton(centralWidget);
        ActivateBtn->setObjectName(QString::fromUtf8("ActivateBtn"));
        ActivateBtn->setGeometry(QRect(20, 280, 111, 24));
        DeactivateBtn = new QPushButton(centralWidget);
        DeactivateBtn->setObjectName(QString::fromUtf8("DeactivateBtn"));
        DeactivateBtn->setGeometry(QRect(20, 310, 111, 24));
        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(20, 370, 271, 141));
        DetectorEdt = new QLineEdit(groupBox_6);
        DetectorEdt->setObjectName(QString::fromUtf8("DetectorEdt"));
        DetectorEdt->setGeometry(QRect(140, 20, 121, 20));
        NrPixelsEdt = new QLineEdit(groupBox_6);
        NrPixelsEdt->setObjectName(QString::fromUtf8("NrPixelsEdt"));
        NrPixelsEdt->setGeometry(QRect(140, 40, 121, 20));
        FPGAVerEdt = new QLineEdit(groupBox_6);
        FPGAVerEdt->setObjectName(QString::fromUtf8("FPGAVerEdt"));
        FPGAVerEdt->setGeometry(QRect(140, 60, 121, 20));
        FirmwareVerEdt = new QLineEdit(groupBox_6);
        FirmwareVerEdt->setObjectName(QString::fromUtf8("FirmwareVerEdt"));
        FirmwareVerEdt->setGeometry(QRect(140, 80, 121, 20));
        DLLVerEdt = new QLineEdit(groupBox_6);
        DLLVerEdt->setObjectName(QString::fromUtf8("DLLVerEdt"));
        DLLVerEdt->setGeometry(QRect(140, 100, 121, 20));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 20, 121, 16));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 40, 111, 16));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 60, 101, 16));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 80, 91, 16));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 100, 91, 16));
        DigitalIoBtn = new QPushButton(centralWidget);
        DigitalIoBtn->setObjectName(QString::fromUtf8("DigitalIoBtn"));
        DigitalIoBtn->setGeometry(QRect(20, 560, 131, 24));
        AnalogIoBtn = new QPushButton(centralWidget);
        AnalogIoBtn->setObjectName(QString::fromUtf8("AnalogIoBtn"));
        AnalogIoBtn->setGeometry(QRect(20, 600, 131, 24));
        groupBox_8 = new QGroupBox(centralWidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setGeometry(QRect(810, 380, 221, 291));
        TimeSinceStartEdt = new QLineEdit(groupBox_8);
        TimeSinceStartEdt->setObjectName(QString::fromUtf8("TimeSinceStartEdt"));
        TimeSinceStartEdt->setGeometry(QRect(150, 30, 61, 20));
        NrScansEdt = new QLineEdit(groupBox_8);
        NrScansEdt->setObjectName(QString::fromUtf8("NrScansEdt"));
        NrScansEdt->setGeometry(QRect(150, 50, 61, 20));
        NrFailuresEdt = new QLineEdit(groupBox_8);
        NrFailuresEdt->setObjectName(QString::fromUtf8("NrFailuresEdt"));
        NrFailuresEdt->setGeometry(QRect(150, 70, 61, 20));
        TimePerScanEdt = new QLineEdit(groupBox_8);
        TimePerScanEdt->setObjectName(QString::fromUtf8("TimePerScanEdt"));
        TimePerScanEdt->setGeometry(QRect(150, 90, 61, 20));
        LastScanEdt = new QLineEdit(groupBox_8);
        LastScanEdt->setObjectName(QString::fromUtf8("LastScanEdt"));
        LastScanEdt->setGeometry(QRect(150, 110, 61, 20));
        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 30, 111, 16));
        label_16 = new QLabel(groupBox_8);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 50, 101, 16));
        label_17 = new QLabel(groupBox_8);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 70, 91, 16));
        label_18 = new QLabel(groupBox_8);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 90, 131, 16));
        label_19 = new QLabel(groupBox_8);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 110, 111, 16));
        plainTextEdit = new QPlainTextEdit(groupBox_8);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 140, 221, 71));
        DisableGraphChk = new QCheckBox(centralWidget);
        DisableGraphChk->setObjectName(QString::fromUtf8("DisableGraphChk"));
        DisableGraphChk->setGeometry(QRect(310, 670, 161, 19));
        plot = new Plot(centralWidget);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(310, 380, 491, 291));
        SaturatedChk = new QCheckBox(centralWidget);
        SaturatedChk->setObjectName(QString::fromUtf8("SaturatedChk"));
        SaturatedChk->setEnabled(false);
        SaturatedChk->setGeometry(QRect(570, 670, 81, 17));
        SaturatedChk->setCheckable(true);
        myLabel = new QLabel(centralWidget);
        myLabel->setObjectName(QString::fromUtf8("myLabel"));
        myLabel->setGeometry(QRect(20, 520, 171, 21));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(160, 520, 141, 61));
        msg = new QLineEdit(centralWidget);
        msg->setObjectName(QString::fromUtf8("msg"));
        msg->setGeometry(QRect(160, 590, 131, 25));
        send = new QPushButton(centralWidget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(180, 640, 89, 25));
        Qtdemo_64Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qtdemo_64Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1038, 19));
        Qtdemo_64Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qtdemo_64Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Qtdemo_64Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qtdemo_64Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Qtdemo_64Class->setStatusBar(statusBar);
        QWidget::setTabOrder(OpenCommBtn, UpdateListBtn);
        QWidget::setTabOrder(UpdateListBtn, SpectrometerList);
        QWidget::setTabOrder(SpectrometerList, ActivateBtn);
        QWidget::setTabOrder(ActivateBtn, DeactivateBtn);
        QWidget::setTabOrder(DeactivateBtn, DetectorEdt);
        QWidget::setTabOrder(DetectorEdt, NrPixelsEdt);
        QWidget::setTabOrder(NrPixelsEdt, FPGAVerEdt);
        QWidget::setTabOrder(FPGAVerEdt, FirmwareVerEdt);
        QWidget::setTabOrder(FirmwareVerEdt, DLLVerEdt);
        QWidget::setTabOrder(DLLVerEdt, DigitalIoBtn);
        QWidget::setTabOrder(DigitalIoBtn, AnalogIoBtn);
        QWidget::setTabOrder(AnalogIoBtn, ShowEepromBtn);
        QWidget::setTabOrder(ShowEepromBtn, StartPixelEdt);
        QWidget::setTabOrder(StartPixelEdt, StopPixelEdt);
        QWidget::setTabOrder(StopPixelEdt, IntTimeEdt);
        QWidget::setTabOrder(IntTimeEdt, IntDelayEdt);
        QWidget::setTabOrder(IntDelayEdt, AvgEdt);
        QWidget::setTabOrder(AvgEdt, SatDetEdt);
        QWidget::setTabOrder(SatDetEdt, HardwareTriggerRBtn);
        QWidget::setTabOrder(HardwareTriggerRBtn, SoftwareTriggerRBtn);
        QWidget::setTabOrder(SoftwareTriggerRBtn, ExternalTriggerRbtn);
        QWidget::setTabOrder(ExternalTriggerRbtn, SynchTriggerRBtn);
        QWidget::setTabOrder(SynchTriggerRBtn, EdgeTriggerRBtn);
        QWidget::setTabOrder(EdgeTriggerRBtn, LevelTriggerRBtn);
        QWidget::setTabOrder(LevelTriggerRBtn, DarkCorrChk);
        QWidget::setTabOrder(DarkCorrChk, DarkCorrPercEdt);
        QWidget::setTabOrder(DarkCorrPercEdt, SmoothModelEdt);
        QWidget::setTabOrder(SmoothModelEdt, SmoothNrPixelsEdt);
        QWidget::setTabOrder(SmoothNrPixelsEdt, FlashesPerScanEdt);
        QWidget::setTabOrder(FlashesPerScanEdt, LaserDelayEdt);
        QWidget::setTabOrder(LaserDelayEdt, LaserWidthEdt);
        QWidget::setTabOrder(LaserWidthEdt, LaserWavEdt);
        QWidget::setTabOrder(LaserWavEdt, StoreToRamEdt);
        QWidget::setTabOrder(StoreToRamEdt, ReadEepromBtn);
        QWidget::setTabOrder(ReadEepromBtn, WriteEepromBtn);
        QWidget::setTabOrder(WriteEepromBtn, NrMeasEdt);
        QWidget::setTabOrder(NrMeasEdt, StartMeasBtn);
        QWidget::setTabOrder(StartMeasBtn, StopMeasBtn);
        QWidget::setTabOrder(StopMeasBtn, PreScanChk);
        QWidget::setTabOrder(PreScanChk, TimeSinceStartEdt);
        QWidget::setTabOrder(TimeSinceStartEdt, NrScansEdt);
        QWidget::setTabOrder(NrScansEdt, NrFailuresEdt);
        QWidget::setTabOrder(NrFailuresEdt, TimePerScanEdt);
        QWidget::setTabOrder(TimePerScanEdt, LastScanEdt);
        QWidget::setTabOrder(LastScanEdt, DisableGraphChk);

        retranslateUi(Qtdemo_64Class);

        QMetaObject::connectSlotsByName(Qtdemo_64Class);
    } // setupUi

    void retranslateUi(QMainWindow *Qtdemo_64Class)
    {
        Qtdemo_64Class->setWindowTitle(QCoreApplication::translate("Qtdemo_64Class", "Qtdemo_64", nullptr));
        OpenCommBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Open Communication_1", nullptr));
        UpdateListBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Update List_2", nullptr));
        ShowEepromBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Show EEPROM params", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Measure", nullptr));
        StartMeasBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Start Measurement_5", nullptr));
        StopMeasBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Stop Measurement_6", nullptr));
        label_3->setText(QCoreApplication::translate("Qtdemo_64Class", "Nr of Scans (-1 = infinite)", nullptr));
        PreScanChk->setText(QCoreApplication::translate("Qtdemo_64Class", "AvaSpec 3648 PreScan", nullptr));
        darkRef->setText(QCoreApplication::translate("Qtdemo_64Class", "Dark Reference_7", nullptr));
        whiteRef->setText(QCoreApplication::translate("Qtdemo_64Class", "White Reference_8", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Prepare Measurement Settings", nullptr));
        label->setText(QCoreApplication::translate("Qtdemo_64Class", "Integration Time [ms]", nullptr));
        label_2->setText(QCoreApplication::translate("Qtdemo_64Class", "Number of Averages", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Trigger Settings", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Trigger Mode", nullptr));
        HardwareTriggerRBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Hardware", nullptr));
        SoftwareTriggerRBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Software", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Trigger Source", nullptr));
        ExternalTriggerRbtn->setText(QCoreApplication::translate("Qtdemo_64Class", "External", nullptr));
        SynchTriggerRBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Synchronized", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Trigger Type", nullptr));
        EdgeTriggerRBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Edge", nullptr));
        LevelTriggerRBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Level", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Dark Correction Settings", nullptr));
        DarkCorrChk->setText(QCoreApplication::translate("Qtdemo_64Class", "Enable", nullptr));
        label_7->setText(QCoreApplication::translate("Qtdemo_64Class", "%", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Smoothing Settings", nullptr));
        label_8->setText(QCoreApplication::translate("Qtdemo_64Class", "Model", nullptr));
        label_9->setText(QCoreApplication::translate("Qtdemo_64Class", "Nr of Pixels", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Control Settings", nullptr));
        label_10->setText(QCoreApplication::translate("Qtdemo_64Class", "Flashes per Scan", nullptr));
        label_11->setText(QCoreApplication::translate("Qtdemo_64Class", "Laser Delay [ns]", nullptr));
        label_12->setText(QCoreApplication::translate("Qtdemo_64Class", "Laser Width [ns]", nullptr));
        label_13->setText(QCoreApplication::translate("Qtdemo_64Class", "Laser Wavelength [nm]", nullptr));
        label_14->setText(QCoreApplication::translate("Qtdemo_64Class", "Spectra Stored to RAM", nullptr));
        ReadEepromBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Read Measurement Settings from EEPROM", nullptr));
        WriteEepromBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Write Measurement Settings to Eeprom", nullptr));
        label_25->setText(QCoreApplication::translate("Qtdemo_64Class", "Start Pixel", nullptr));
        label_26->setText(QCoreApplication::translate("Qtdemo_64Class", "Stop Pixel", nullptr));
        label_27->setText(QCoreApplication::translate("Qtdemo_64Class", "Integration Delay [ns]", nullptr));
        label_28->setText(QCoreApplication::translate("Qtdemo_64Class", "Saturation Detection", nullptr));
        QTableWidgetItem *___qtablewidgetitem = SpectrometerList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Qtdemo_64Class", "SerialNr", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = SpectrometerList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Qtdemo_64Class", "Status", nullptr));
        ActivateBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Activate_3", nullptr));
        DeactivateBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Deactivate_4", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Selected Device Info", nullptr));
        label_20->setText(QCoreApplication::translate("Qtdemo_64Class", "Detector", nullptr));
        label_21->setText(QCoreApplication::translate("Qtdemo_64Class", "Nr of Pixels", nullptr));
        label_22->setText(QCoreApplication::translate("Qtdemo_64Class", "FPGA Version", nullptr));
        label_23->setText(QCoreApplication::translate("Qtdemo_64Class", "Firmware Version", nullptr));
        label_24->setText(QCoreApplication::translate("Qtdemo_64Class", "DLL Version", nullptr));
        DigitalIoBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Digital IO", nullptr));
        AnalogIoBtn->setText(QCoreApplication::translate("Qtdemo_64Class", "Analog IO", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("Qtdemo_64Class", "Measurement Statistics", nullptr));
        label_15->setText(QCoreApplication::translate("Qtdemo_64Class", "Time Since Start [s]", nullptr));
        label_16->setText(QCoreApplication::translate("Qtdemo_64Class", "Nr of Scans", nullptr));
        label_17->setText(QCoreApplication::translate("Qtdemo_64Class", "Nr of Failures", nullptr));
        label_18->setText(QCoreApplication::translate("Qtdemo_64Class", "Avg. Time per Scan [ms]", nullptr));
        label_19->setText(QCoreApplication::translate("Qtdemo_64Class", "Last Scan in [ms]", nullptr));
        DisableGraphChk->setText(QCoreApplication::translate("Qtdemo_64Class", "Disable Graphical Output", nullptr));
        SaturatedChk->setText(QCoreApplication::translate("Qtdemo_64Class", "Saturated", nullptr));
        myLabel->setText(QCoreApplication::translate("Qtdemo_64Class", "you pressed what", nullptr));
        msg->setText(QString());
        send->setText(QCoreApplication::translate("Qtdemo_64Class", "send", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Qtdemo_64Class: public Ui_Qtdemo_64Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDEMO_64_H
