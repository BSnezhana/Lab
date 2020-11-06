#include "dialog.h"
#include "ui_dialog.h"

MyDialog::MyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

}

MyDialog::~MyDialog()
{
    delete ui;
}

