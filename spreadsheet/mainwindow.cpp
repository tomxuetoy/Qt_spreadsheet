#include <QtGui>

#include "mainwindow.h"
#include "spreadsheet.h"

MainWindow::MainWindow()
{
    spreadsheet = new Spreadsheet;
    setCentralWidget(spreadsheet);

    setWindowIcon(QIcon(":/images/icon.png"));
}
