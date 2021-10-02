#ifndef REGISTDIALOG_H
#define REGISTDIALOG_H

#include <QDialog>

namespace Ui {
class RegistDialog;
}

class RegistDialog : public QDialog {
  Q_OBJECT

 public:
  explicit RegistDialog(QWidget *parent = nullptr);
  ~RegistDialog();
  QString getAccount();
  QString getPassword();

  private slots:
  void on_pushButton_clicked();

      void on_cancel_clicked();

  private:
  Ui::RegistDialog *ui;
};

#endif  // REGISTDIALOG_H
