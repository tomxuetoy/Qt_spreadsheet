#include <QtGui>

#include "cell.h"
#include "spreadsheet.h"

Spreadsheet::Spreadsheet(QWidget *parent)
    : QTableWidget(parent)
{
    setItemPrototype(new Cell);
    setSelectionMode(ContiguousSelection);
}
