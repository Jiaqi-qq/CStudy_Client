#include <QApplication>

#include "defaultdialog.h"
#include "mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  DefaultDialog ddlg;
  MainWindow w;
  if (ddlg.exec() == QDialog::Accepted) {
    w.show();
    return a.exec();
  } else {
    return 0;
  }
  //    w.show();
  //    return a.exec();
}
