/**
* @file mainwindow.cpp
* @author Luc Renambot/ Dariusz Jedralski
* @version 1.0
* @section LICENSE
* @brief Contains functions to create and destroy a mainwindow along with functions that print out values shown in mainwindow
* @section DESCRIPTION
*  the mainwindow that contains several buttons and readout
*/
#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

/*! \brief Used to create new window. */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/*! \brief Deletes the Main window. */
MainWindow::~MainWindow()
{
    delete ui;
}

/*! \brief Prints that program is exiting and exits. */
void MainWindow::on_pushButton_1_clicked()
{
    cout << "Exiting." << endl;
    exit(0);
}

/*! \brief Prints out current value
 * \param curNumber New x square */
void MainWindow::on_spinBox_valueChanged(int curNumber)
{
    cout << "Value at " << curNumber << "." << endl;
}
