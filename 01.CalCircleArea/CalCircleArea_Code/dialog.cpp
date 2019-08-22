#include "dialog.h"
#include <QGridLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    label1 = new QLabel(this);
    label1->setText(tr("请输入圆的半径"));

    label2 = new QLabel(this);
    lineEdit = new QLineEdit(this);

    button = new QPushButton(this);
    button->setText(tr("显示对应圆的面积"));
    connect(button,SIGNAL(clicked()),this,SLOT(showArea()));

    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(label1,0,0);
    mainLayout->addWidget(lineEdit,0,1);
    mainLayout->addWidget(label2,1,0);
    mainLayout->addWidget(button,1,1);
}

Dialog::~Dialog()
{

}

const static double PI = 3.141592654;
void Dialog::showArea()
{
    QString radiusStr = lineEdit->text();
    int radius = radiusStr.toInt();
    double area = radius * radius * PI;
    label2->setText(QString::number(area));
}










