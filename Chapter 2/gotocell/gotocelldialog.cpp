#include "gotocelldialog.h"
#include "ui_gotocelldialog.h"

gotocelldialog::gotocelldialog(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gotocelldialog)
{
    ui->setupUi(this);
}

gotocelldialog::~gotocelldialog()
{
    delete ui;
}
