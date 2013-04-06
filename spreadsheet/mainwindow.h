#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class Spreadsheet;

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    MainWindow();
    
private:
    Spreadsheet *spreadsheet;
};

#endif // MAINWINDOW_H
