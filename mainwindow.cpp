#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->plainTextEdit->setPlainText("123");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int a = ui->lineEdit_4->text().toDouble();
    int b = ui->lineEdit_5->text().toDouble();
    int c = ui->lineEdit_6->text().toDouble();
    int x;
    if((b*b - 4*a*c) >= 0)
    {
        x = (-1*b + sqrt(b*b - 4*a*c)) / (2*a);
        x = (-1*b + sqrt(b*b - 4*a*c)) / (2*a);
    }
    else
    {
        std::cout << "D < 0";
    }
    QString answer = QString::number(x);
    ui->lineEdit_7->setText(answer);
}


void MainWindow::on_pushButton_2_clicked() // radioButton не работает
{
//    double degrees = 180.f;
//    double radians = qDegreesToRadians(degrees);
    int side_A;
    int side_B = ui -> lineEdit_2->text().toDouble();
    int side_C = ui -> lineEdit_3->text().toDouble();
    int angle  = ui -> lineEdit -> text().toDouble();
    if(ui -> radioButton)
    {
        angle = cos(angle * M_PI) / 180;
        side_A = pow(side_B, 2) + pow(side_C, 2) - 2*side_B*side_C*(angle);
        side_A = sqrt(side_A);
        QString answer = QString::number(side_A);
        ui->lineEdit_8->setText(answer);
    }
    else if(ui->radioButton_2->isChecked()) // ???
    {
        angle = cos(angle * 180) / M_PI;
        side_A = pow(side_B, 2) + pow(side_C, 2) - 2*side_B*side_C*(angle);
        side_A = sqrt(side_A) + 1;
        QString answer = QString::number(side_A);
        ui->lineEdit_8->setText(answer);
    }
}


void MainWindow::on_pushButton_3_clicked()
{
     ui->plainTextEdit->appendPlainText("fuck this");
//    ui->plainTextEdit_2->setPlainText("");

}

