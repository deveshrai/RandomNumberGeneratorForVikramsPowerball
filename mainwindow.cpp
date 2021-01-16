#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionGenerate_Random_Powerball_Numbers_for_Vikram_triggered()
{
    int num[6];
    for(int x=0;x<5;x++)
    {
        num[x]=QRandomGenerator::global()->generate()%62;
    }
    num[5]=QRandomGenerator::global()->generate()%26;
    ui->label->setText(QString::number(num[0]));
    ui->label_2->setText(QString::number(num[1]));
    ui->label_3->setText(QString::number(num[2]));
    ui->label_4->setText(QString::number(num[3]));
    ui->label_5->setText(QString::number(num[4]));
    ui->label_6->setText(QString::number(num[5]));

}
