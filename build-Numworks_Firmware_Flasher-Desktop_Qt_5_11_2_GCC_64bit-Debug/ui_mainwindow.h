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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_About;
    QWidget *centralWidget;
    QPlainTextEdit *OutputConsole;
    QPushButton *Open_Firm_pushButton;
    QPushButton *Flash_pushButton;
    QPushButton *Get_Calc_State_pushButton;
    QProgressBar *progressBar;
    QCheckBox *checkBox;
    QLabel *Picture_Label;
    QMenuBar *menuBar;
    QMenu *menu_Fichier;
    QMenu *menu_Help;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(465, 435);
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        OutputConsole = new QPlainTextEdit(centralWidget);
        OutputConsole->setObjectName(QStringLiteral("OutputConsole"));
        OutputConsole->setGeometry(QRect(10, 230, 371, 91));
        Open_Firm_pushButton = new QPushButton(centralWidget);
        Open_Firm_pushButton->setObjectName(QStringLiteral("Open_Firm_pushButton"));
        Open_Firm_pushButton->setGeometry(QRect(10, 190, 111, 23));
        Flash_pushButton = new QPushButton(centralWidget);
        Flash_pushButton->setObjectName(QStringLiteral("Flash_pushButton"));
        Flash_pushButton->setGeometry(QRect(140, 190, 111, 23));
        Get_Calc_State_pushButton = new QPushButton(centralWidget);
        Get_Calc_State_pushButton->setObjectName(QStringLiteral("Get_Calc_State_pushButton"));
        Get_Calc_State_pushButton->setGeometry(QRect(270, 190, 111, 23));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(10, 340, 371, 23));
        progressBar->setValue(24);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 150, 111, 21));
        Picture_Label = new QLabel(centralWidget);
        Picture_Label->setObjectName(QStringLiteral("Picture_Label"));
        Picture_Label->setGeometry(QRect(270, 70, 111, 101));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 465, 20));
        menu_Fichier = new QMenu(menuBar);
        menu_Fichier->setObjectName(QStringLiteral("menu_Fichier"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu_Fichier->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_Help->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_About->setText(QApplication::translate("MainWindow", "&About", nullptr));
        OutputConsole->setPlainText(QString());
        Open_Firm_pushButton->setText(QApplication::translate("MainWindow", "Open Firmware", nullptr));
        Flash_pushButton->setText(QApplication::translate("MainWindow", "Flash", nullptr));
        Get_Calc_State_pushButton->setText(QApplication::translate("MainWindow", "Get Calc State", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Remove File", nullptr));
        Picture_Label->setText(QString());
        menu_Fichier->setTitle(QApplication::translate("MainWindow", "&Fichier", nullptr));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
