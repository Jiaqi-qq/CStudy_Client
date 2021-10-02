#include "registdialog.h"

#include <QMessageBox>

#include "ui_registdialog.h"
RegistDialog::RegistDialog(QWidget *parent)
    : QDialog(parent), ui(new Ui::RegistDialog) {
  ui->setupUi(this);
}

RegistDialog::~RegistDialog() { delete ui; }

QString RegistDialog::getAccount() { return ui->account->text(); }

QString RegistDialog::getPassword() { return ui->password->text(); }

void RegistDialog::on_pushButton_clicked() {
  if (ui->password->text() != ui->repassword->text()) {
    QMessageBox::warning(this, tr("警告"), tr("两次密码不相同"),
                         QMessageBox::Abort);
    return;
  }
  // 注册验证
  QMessageBox::information(this, tr("提示"), tr("注册成功！"), QMessageBox::Ok);
  accept();
}

void RegistDialog::on_cancel_clicked() { close(); }
