#ifndef CAL_H
#define CAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class cal; }
QT_END_NAMESPACE

class cal : public QMainWindow
{
    Q_OBJECT

public:
    cal(QWidget *parent = nullptr);
    ~cal();

private slots:
    void on_pushButton_00_clicked();

    void on_pushButton_01_clicked();

    void on_pushButton_02_clicked();

    void on_pushButton_03_clicked();

    void on_pushButton_04_clicked();

    void on_pushButton_05_clicked();

    void on_pushButton_06_clicked();

    void on_pushButton_07_clicked();

    void on_pushButton_08_clicked();

    void on_pushButton_09_clicked();

    void on_pushButton_float_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_percent_clicked();

    void on_pushButton_abs_clicked();

    //void on_pushButton_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_allclear_clicked();

private:
    Ui::cal *ui;
};
#endif // CAL_H
