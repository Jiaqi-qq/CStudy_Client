#include "defaultdialog.h"

#include <QDebug>
#include <QMessageBox>

#include "registdialog.h"
#include "ui_defaultdialog.h"
DefaultDialog::DefaultDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::DefaultDialog) {
  ui->setupUi(this);
}

DefaultDialog::~DefaultDialog() { delete ui; }

void DefaultDialog::on_regist_clicked() {
  RegistDialog *rd = new RegistDialog(this);
  if (rd->exec() == QDialog::Accepted) {
    ui->account->setText(rd->getAccount());
    qDebug() << tr("密码：") << rd->getPassword();
  }
  delete rd;
}

void DefaultDialog::on_login_clicked() { accept(); }
