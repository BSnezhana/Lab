#include "dialog.h"

#include <QApplication>
#include <QSpinBox>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QComboBox>
#include <QPushButton>
#include <QFile>
#include<QIODevice>
#include<QTextStream>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyDialog dg;
    dg.show();

    //setWindowTitle("Анкета");
    QSpinBox *sBox = new QSpinBox;
    QTextEdit *tEdit = new QTextEdit;
    QHBoxLayout *Hlay = new QHBoxLayout;
    Hlay->addWidget(sBox);
    Hlay->addWidget(tEdit);
    dg.setLayout(Hlay);

    QComboBox *cBox = new QComboBox;
    QPushButton *But = new QPushButton ;
    Hlay->addWidget(cBox);
    Hlay->addWidget(But);

    QObject::connect(But, SIGNAL(clicked()), this, SLOT(Wrf()));
    return a.exec();
}
