/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *UUmnInput_3;
    QPushButton *OneInput_3;
    QPushButton *EightInput_3;
    QPushButton *SevenInput_3;
    QPushButton *TwoInput_3;
    QPushButton *FiveInput_3;
    QPushButton *NineInput_3;
    QPushButton *UUndoInput_3;
    QPushButton *SixInput_3;
    QPushButton *UOutput_3;
    QPushButton *UPlusInput_3;
    QPushButton *ThreeInput_3;
    QPushButton *UMinusInput_3;
    QPushButton *UDelInput_3;
    QPushButton *FourInput_3;
    QPushButton *ZeroInput_3;
    QPushButton *UClear_3;
    QTextBrowser *Output_3;
    QPushButton *DrobSwap;
    QLabel *MainChisl;
    QPushButton *Spravka;
    QPushButton *SignSwap_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(471, 374);
        MainWindow->setMinimumSize(QSize(471, 374));
        MainWindow->setMaximumSize(QSize(471, 374));
        MainWindow->setToolButtonStyle(Qt::ToolButtonFollowStyle);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        UUmnInput_3 = new QPushButton(centralwidget);
        UUmnInput_3->setObjectName(QStringLiteral("UUmnInput_3"));
        UUmnInput_3->setGeometry(QRect(270, 160, 51, 51));
        QFont font;
        font.setPointSize(15);
        UUmnInput_3->setFont(font);
        OneInput_3 = new QPushButton(centralwidget);
        OneInput_3->setObjectName(QStringLiteral("OneInput_3"));
        OneInput_3->setGeometry(QRect(30, 100, 51, 51));
        QFont font1;
        font1.setPointSize(12);
        OneInput_3->setFont(font1);
        EightInput_3 = new QPushButton(centralwidget);
        EightInput_3->setObjectName(QStringLiteral("EightInput_3"));
        EightInput_3->setGeometry(QRect(90, 220, 51, 51));
        EightInput_3->setFont(font1);
        SevenInput_3 = new QPushButton(centralwidget);
        SevenInput_3->setObjectName(QStringLiteral("SevenInput_3"));
        SevenInput_3->setGeometry(QRect(30, 220, 51, 51));
        SevenInput_3->setFont(font1);
        TwoInput_3 = new QPushButton(centralwidget);
        TwoInput_3->setObjectName(QStringLiteral("TwoInput_3"));
        TwoInput_3->setGeometry(QRect(90, 100, 51, 51));
        TwoInput_3->setFont(font1);
        FiveInput_3 = new QPushButton(centralwidget);
        FiveInput_3->setObjectName(QStringLiteral("FiveInput_3"));
        FiveInput_3->setGeometry(QRect(90, 160, 51, 51));
        FiveInput_3->setFont(font1);
        NineInput_3 = new QPushButton(centralwidget);
        NineInput_3->setObjectName(QStringLiteral("NineInput_3"));
        NineInput_3->setGeometry(QRect(150, 220, 51, 51));
        NineInput_3->setFont(font1);
        UUndoInput_3 = new QPushButton(centralwidget);
        UUndoInput_3->setObjectName(QStringLiteral("UUndoInput_3"));
        UUndoInput_3->setGeometry(QRect(330, 100, 111, 51));
        UUndoInput_3->setFont(font);
        SixInput_3 = new QPushButton(centralwidget);
        SixInput_3->setObjectName(QStringLiteral("SixInput_3"));
        SixInput_3->setGeometry(QRect(150, 160, 51, 51));
        SixInput_3->setFont(font1);
        UOutput_3 = new QPushButton(centralwidget);
        UOutput_3->setObjectName(QStringLiteral("UOutput_3"));
        UOutput_3->setGeometry(QRect(270, 280, 171, 51));
        QFont font2;
        font2.setPointSize(20);
        UOutput_3->setFont(font2);
        UPlusInput_3 = new QPushButton(centralwidget);
        UPlusInput_3->setObjectName(QStringLiteral("UPlusInput_3"));
        UPlusInput_3->setGeometry(QRect(270, 220, 51, 51));
        UPlusInput_3->setFont(font);
        ThreeInput_3 = new QPushButton(centralwidget);
        ThreeInput_3->setObjectName(QStringLiteral("ThreeInput_3"));
        ThreeInput_3->setGeometry(QRect(150, 100, 51, 51));
        ThreeInput_3->setFont(font1);
        UMinusInput_3 = new QPushButton(centralwidget);
        UMinusInput_3->setObjectName(QStringLiteral("UMinusInput_3"));
        UMinusInput_3->setGeometry(QRect(330, 220, 51, 51));
        UMinusInput_3->setFont(font);
        UDelInput_3 = new QPushButton(centralwidget);
        UDelInput_3->setObjectName(QStringLiteral("UDelInput_3"));
        UDelInput_3->setGeometry(QRect(330, 160, 51, 51));
        UDelInput_3->setFont(font);
        FourInput_3 = new QPushButton(centralwidget);
        FourInput_3->setObjectName(QStringLiteral("FourInput_3"));
        FourInput_3->setGeometry(QRect(30, 160, 51, 51));
        FourInput_3->setFont(font1);
        ZeroInput_3 = new QPushButton(centralwidget);
        ZeroInput_3->setObjectName(QStringLiteral("ZeroInput_3"));
        ZeroInput_3->setGeometry(QRect(30, 280, 111, 51));
        ZeroInput_3->setFont(font);
        UClear_3 = new QPushButton(centralwidget);
        UClear_3->setObjectName(QStringLiteral("UClear_3"));
        UClear_3->setGeometry(QRect(270, 100, 51, 51));
        UClear_3->setFont(font);
        Output_3 = new QTextBrowser(centralwidget);
        Output_3->setObjectName(QStringLiteral("Output_3"));
        Output_3->setGeometry(QRect(30, 10, 411, 51));
        DrobSwap = new QPushButton(centralwidget);
        DrobSwap->setObjectName(QStringLiteral("DrobSwap"));
        DrobSwap->setGeometry(QRect(150, 280, 51, 51));
        DrobSwap->setFont(font);
        MainChisl = new QLabel(centralwidget);
        MainChisl->setObjectName(QStringLiteral("MainChisl"));
        MainChisl->setGeometry(QRect(40, 40, 391, 20));
        Spravka = new QPushButton(centralwidget);
        Spravka->setObjectName(QStringLiteral("Spravka"));
        Spravka->setGeometry(QRect(390, 160, 51, 51));
        Spravka->setFont(font);
        SignSwap_3 = new QPushButton(centralwidget);
        SignSwap_3->setObjectName(QStringLiteral("SignSwap_3"));
        SignSwap_3->setGeometry(QRect(390, 220, 51, 51));
        SignSwap_3->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 471, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CalcByVeles", nullptr));
        UUmnInput_3->setText(QApplication::translate("MainWindow", "*", nullptr));
        OneInput_3->setText(QApplication::translate("MainWindow", "1", nullptr));
        EightInput_3->setText(QApplication::translate("MainWindow", "8", nullptr));
        SevenInput_3->setText(QApplication::translate("MainWindow", "7", nullptr));
        TwoInput_3->setText(QApplication::translate("MainWindow", "2", nullptr));
        FiveInput_3->setText(QApplication::translate("MainWindow", "5", nullptr));
        NineInput_3->setText(QApplication::translate("MainWindow", "9", nullptr));
        UUndoInput_3->setText(QApplication::translate("MainWindow", "\342\206\220", nullptr));
        SixInput_3->setText(QApplication::translate("MainWindow", "6", nullptr));
        UOutput_3->setText(QApplication::translate("MainWindow", "=", nullptr));
        UPlusInput_3->setText(QApplication::translate("MainWindow", "+", nullptr));
        ThreeInput_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        UMinusInput_3->setText(QApplication::translate("MainWindow", "-", nullptr));
        UDelInput_3->setText(QApplication::translate("MainWindow", "/", nullptr));
        FourInput_3->setText(QApplication::translate("MainWindow", "4", nullptr));
        ZeroInput_3->setText(QApplication::translate("MainWindow", "0", nullptr));
        UClear_3->setText(QApplication::translate("MainWindow", "C", nullptr));
        DrobSwap->setText(QApplication::translate("MainWindow", ".", nullptr));
        MainChisl->setText(QString());
        Spravka->setText(QApplication::translate("MainWindow", "?", nullptr));
        SignSwap_3->setText(QApplication::translate("MainWindow", "+/-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
