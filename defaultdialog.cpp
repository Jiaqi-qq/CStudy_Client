#include "defaultdialog.h"
#include "ui_defaultdialog.h"

DefaultDialog::DefaultDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DefaultDialog)
{
    ui->setupUi(this);
}

DefaultDialog::~DefaultDialog()
{
    delete ui;
}

