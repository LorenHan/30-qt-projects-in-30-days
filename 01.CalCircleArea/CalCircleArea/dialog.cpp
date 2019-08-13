#include "dialog.h"
#include "ui_dialog.h"

const static double PI = 3.1416;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    QString radiusStr = ui->radiusLineEdit->text();
    int radius = radiusStr.toInt();
    double area = radius * radius * PI;
    ui->areaLable_2->setText(QString::number(area)); // QString::number(area) show int in a label.
}

void Dialog::on_radiusLineEdit_textChanged(const QString &arg1)
{
    QString radiusStr = ui->radiusLineEdit->text();
    int radius = radiusStr.toInt();
    double area = radius * radius * PI;
    ui->areaLable_2->setText(QString::number(area));
}
