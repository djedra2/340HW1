/**
* @file mainwindow.h
* @author Luc Renambot/ Dariusz Jedralski
* @version 1.0
* @section LICENSE
*
* @section DESCRIPTION
*   header file for the mainwindow
* @brief the header file for mainwindow.cpp
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
