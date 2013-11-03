/**
* @file main.cpp
* @author Luc Renambot/ Dariusz Jedralski
* @version 1.0
* @section LICENSE
* @brief the main file used to create a mainwindow
* @section DESCRIPTION
*  creates a mainwindow
*/
#include "mainwindow.h"
#include <QApplication>

/*! \brief Begins the program. */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    
    return a.exec();
}
