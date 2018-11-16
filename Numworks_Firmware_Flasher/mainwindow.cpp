#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDate>
#include <QProcess>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->, SIGNAL(clicked()), this, SLOT(openDestinationFolder()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Open_Firm_pushButton_clicked()
{
    ui->statusBar->showMessage("Test");

}

void MainWindow::on_action_About_triggered()
{
   const std::string Compilator_Version = std::to_string(__GNUC__) + "." + std::to_string(__GNUC_MINOR__) + "." + std::to_string(__GNUC_PATCHLEVEL__);
   const QString CPP_Info = QString::fromStdString(std::to_string(__cplusplus));

   const QString QCompilator_Version = "Compiler Version :" + QString::fromStdString(Compilator_Version);
   //QString sDate = QDateTime::currentDateTime().toString("dddd dd MMMM yyyy hh:mm:ss.zzz");
   const QString sDate = QDateTime::currentDateTime().toString("dd/MM/yyyy");
   QMessageBox msgBox;

   msgBox.setText("<b>Build informations</b>");
   const QString Message = QString("Build by: ") + QCompilator_Version + "\n" + "C++ version: " + CPP_Info + "\n" + "Build date :" + sDate + "\n" + "By: " + getenv("USER");

   msgBox.setInformativeText(Message);
   msgBox.exec();
}
