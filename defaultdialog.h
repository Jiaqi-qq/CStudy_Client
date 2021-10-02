#ifndef DEFAULTDIALOG_H
#define DEFAULTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class DefaultDialog; }
QT_END_NAMESPACE

class DefaultDialog : public QDialog
{
    Q_OBJECT

public:
    DefaultDialog(QWidget *parent = nullptr);
    ~DefaultDialog();

private:
    Ui::DefaultDialog *ui;
};
#endif // DEFAULTDIALOG_H
