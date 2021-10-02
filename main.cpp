#include "defaultdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DefaultDialog w;
    w.show();
    return a.exec();
}
