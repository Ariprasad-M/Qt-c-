#include "cal.h"
#include "ui_cal.h"

bool addition=false;
bool subtraction=false;
bool multiplication=false;
bool division=false;
bool percent=false;
bool mod=false;

double OldVAl=0;
double NewVal=0;
double ans=0;

cal::cal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cal)
{
    ui->setupUi(this);
}

cal::~cal()
{
    delete ui;
}


void cal::on_pushButton_00_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("0");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"0");
        }
}


void cal::on_pushButton_01_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("1");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"1");
        }
}


void cal::on_pushButton_02_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("2");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"2");
        }
}


void cal::on_pushButton_03_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("3");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"3");
        }

}


void cal::on_pushButton_04_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("4");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"4");
        }
}


void cal::on_pushButton_05_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("5");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"5");
        }
}


void cal::on_pushButton_06_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("6");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"6");
        }

}


void cal::on_pushButton_07_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("7");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"7");
        }
}


void cal::on_pushButton_08_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("8");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"8");
        }
}


void cal::on_pushButton_09_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText("9");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+"9");
        }
}


void cal::on_pushButton_float_clicked()
{
    QString DisplayVal = ui->lineEdit->text();
        if(DisplayVal.toDouble()==0 || DisplayVal.toDouble()==0.0){
            ui->lineEdit->setText(".");
        }
        else
        {
            ui->lineEdit->setText(DisplayVal+".");
        }
}


void cal::on_pushButton_add_clicked()
{
    OldVAl= ui->lineEdit->text().toDouble();
       addition=true;
       subtraction = false;
       multiplication=false;
       division=false;
       percent=false;
       mod=false;
       ui->lineEdit->setText("0");
}


void cal::on_pushButton_sub_clicked()
{


     OldVAl= ui->lineEdit->text().toDouble();
       addition=false;
       subtraction = true;
       multiplication=false;
       division=false;
       percent=false;
       mod=false;
       ui->lineEdit->setText("0");

}


void cal::on_pushButton_mul_clicked()
{
    OldVAl= ui->lineEdit->text().toDouble();
        addition=false;
        subtraction = false;
        multiplication=true;
        division=false;
        percent=false;
        mod=false;
        ui->lineEdit->setText("0");


}


void cal::on_pushButton_div_clicked()
{
    OldVAl= ui->lineEdit->text().toDouble();
        addition=false;
        subtraction = false;
        multiplication=false;
        division=true;
        percent=false;
        mod=false;
       ui->lineEdit->setText("0");

}


void cal::on_pushButton_percent_clicked()
{
    OldVAl= ui->lineEdit->text().toDouble();
       addition=false;
       subtraction = false;
       multiplication=false;
       division=false;
       percent=true;
       mod=false;
       ui->lineEdit->setText(QString::number(OldVAl/100));

}


void cal::on_pushButton_abs_clicked()
{
    OldVAl= ui->lineEdit->text().toDouble();
        addition=false;
        subtraction = false;
        multiplication=false;
        division=false;
        percent=false;
        mod=true;
        ui->lineEdit->setText(QString::number(abs(OldVAl)));
}


void cal::on_pushButton_equal_clicked()
{
    NewVal= ui->lineEdit->text().toDouble();
        if(addition==true){
          ans= OldVAl+NewVal;
        }
        else if(subtraction==true){
            if(OldVAl<=0 ){
            ans= NewVal-OldVAl;
            }
            else {
               ans= OldVAl-NewVal;
           }
           }

        else if(multiplication==true){
            ans= OldVAl*NewVal;

        }
        else if(division==true){
            ans= (OldVAl)/(NewVal);

        }
       // else if(percent==true){
         //   ans= OldVAl/100;

       // }
       /* else if(mod==true){
            if(OldVAl < 0) {
                ans= -(-ans);}
            else
            {ans= -(ans);}
        }*/
       ui->lineEdit->setText(QString::number(ans));
}





void cal::on_pushButton_allclear_clicked()
{
    ui->lineEdit->setText("0");
}

