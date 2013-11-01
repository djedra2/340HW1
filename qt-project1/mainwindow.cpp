#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_1_clicked()
{
    cout << "Exiting." << endl;
    exit(0);
}

void MainWindow::on_spinBox_valueChanged(int curNumber)
{
    cout << "value at " << curNumber << "." << endl;
}
