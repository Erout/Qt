#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H
#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
    void clearStatus();
    std::string getFirstText();
    std::string getSecondText();
    double getInpX();
    int getInstruction();
    void showResult(std::string s);
private slots:
    void on_exitBtn_clicked();
    void on_loginBtn_clicked();
    void on_addBtn_clicked();
    void on_subBtn_clicked();
    void on_mulBtn_clicked();
    void on_derBtn_clicked();
    void on_inpBtn_clicked();

private:
    Ui::LoginDialog *ui;
    bool addStatus;
    bool subStatus;
    bool derStatus;
    bool mulStatus;
    bool InpStatus;
};

#endif // LOGINDIALOG_H
