#include "saiprakash.h"
#include "ui_saiprakash.h"
#include <QMessageBox>
#include <QDebug>
#include<QPixmap>
#include<QIcon>

saiprakash::saiprakash(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::saiprakash)
{
    ui->setupUi(this);
    ui->pushButton_5->setCheckable(true);

}

saiprakash::~saiprakash()
{
    delete ui;
}


void saiprakash::on_pushButton_clicked()
{
    QMessageBox::information(this,"SaiCJ 212218119031","THIS IS INFORMATION BOX");
}

void saiprakash::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton
            reply=QMessageBox::question(this,"SaiCJ 212218119031","Do you like Apples?",QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            QMessageBox::information(this,"SaiCJ 212218119031","Yes");
        }
        if(reply == QMessageBox::No)
        {
            QMessageBox::information(this,"SaiCJ 212218119031","No");
        }
}

void saiprakash::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton
            reply=QMessageBox::question(this,"SaiCJ 212218119031","This is a custom message",
                                        QMessageBox::Yes | QMessageBox::YesToAll | QMessageBox::No | QMessageBox::NoToAll);
    if(reply == QMessageBox::Yes)
        {
            qDebug() <<"Nothing is displayed";
        }
        if(reply == QMessageBox::YesToAll)
        {
           QMessageBox::warning(this,"SaiCJ 212218119031","Display the message with warning as YesToAll");
        }
        if(reply == QMessageBox::No)
        {
            qDebug() <<"Nothing is displayed";
        }
        if(reply == QMessageBox::NoToAll)
        {
           QMessageBox::warning(this,"SaiCJ 212218119031","Don't Display the message with warning as NoToAll");
        }
}

void saiprakash::on_pushButton_4_clicked()
{
    QMessageBox::warning(this,"SaiCJ 212218119031","This is a warning message");

}

void saiprakash::on_pushButton_5_toggled(bool checked)
{
    if(checked)
        {
            qDebug()<<"Button Checked --ON--";
            ui->pushButton_5->setIcon(QIcon("C:/Users/nandi/Documents/C++/CIA2_NandinisreeVS/on.jpg"));
            ui->pushButton_5->setIconSize(QSize(110,110));
        }
        else
        {
            qDebug()<<"Button UnChecked --OFF--";
            ui->pushButton_5->setIcon(QIcon("C:/Users/nandi/Documents/C++/CIA2_NandinisreeVS/off.jpg"));
            ui->pushButton_5->setIconSize(QSize(110,100));
        }
}
