#include "dialog.h"
#include "ui_dialog.h"


const char* sky[] {"癸", "甲", "乙", "丙", "丁", "戊", "己", "庚", "辛", "壬"};
const char* land[] {"亥", "子", "丑" ,"寅", "卯", "辰", "巳", "午", "未", "申", "酉", "戌"}; //定义“数”组

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
    bool ok;
    QString Str {ui->LineEdit->text()};
    int Int {Str.toInt(&ok)};

    int&& years {abs(Int % 60 - 3)};
    int&& sky_years {years % 10};
    int&& land_years {years % 12};  //转换

    ui->Label_2->setText(sky[sky_years]);
    ui->Label_3->setText(land[land_years]);  //输出
}

