#ifndef SAIPRAKASH_H
#define SAIPRAKASH_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class saiprakash; }
QT_END_NAMESPACE

class saiprakash : public QMainWindow
{
    Q_OBJECT

public:
    saiprakash(QWidget *parent = nullptr);
    ~saiprakash();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_toggled(bool checked);

private:
    Ui::saiprakash *ui;
};
#endif // SAIPRAKASH_H
