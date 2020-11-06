#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTextCharFormat>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action,SIGNAL(triggered()),this,SLOT(About_Lab()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::About_Lab()
{
    auth *dg = new auth();
    dg->show();
}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->calendarWidget->setFirstDayOfWeek(Qt::DayOfWeek(index+1));
    QTextCharFormat format;
    format.setForeground(qvariant_cast<QColor>("green"));
    ui->calendarWidget->setWeekdayTextFormat(Qt::DayOfWeek(index+1), format);
}
