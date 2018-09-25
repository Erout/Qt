#include "logindialog.h"
#include "ui_logindialog.h"
LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    clearStatus();
    quit = false;
    cal = true;
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_exitBtn_clicked()
{
    close();
}
void LoginDialog::on_loginBtn_clicked()
{
    cal = true;
}
void LoginDialog::clearStatus(){
    addStatus = false;
    subStatus = false;
    mulStatus = false;
    derStatus = false;
    InpStatus = false;
}
void LoginDialog::on_addBtn_clicked(){
    clearStatus();
    addStatus  = true;
}
void LoginDialog::on_derBtn_clicked(){
    clearStatus();
    derStatus = true;
}
void LoginDialog::on_mulBtn_clicked(){
    clearStatus();
    mulStatus = true;
}
void LoginDialog::on_subBtn_clicked(){
    clearStatus();
    subStatus = true;
}
void LoginDialog::on_inpBtn_clicked(){
    clearStatus();
    InpStatus = true;
}
std::string LoginDialog::getFirstText(){
    std::string s = ui->userLineEdit->text().toUtf8().constData();
    return s;
}
std::string LoginDialog::getSecondText(){
    std::string s = ui->pwdLineEdit->text().toUtf8().constData();
    return s;
}
double LoginDialog::getInpX(){
     return ui->doubleSpinBox->value();
}
void LoginDialog::showResult(std::string s){
    ui->result->setText(QString::fromStdString(s));
}
int LoginDialog::getInstruction(){
   if(addStatus == true)
       return 1;
   else if(subStatus == true)
       return 2;
   else if(mulStatus == true)
       return 3;
   else if(derStatus == true)
       return 4;
   else if(InpStatus == true)
       return 5;
   else
       return 0;
}
bool LoginDialog::quitStatus(){
    return quit;
}
bool LoginDialog::Calculate(){
    return cal;
}
void LoginDialog::reSetCalculate(){
    cal = false;
}
