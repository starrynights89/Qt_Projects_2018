#include "gotocelldialog.h"

#include <QtWidgets>

GoToCellDialog::GoToCellDialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GoToCellDialog)
{
    ui->setupUi(this);

    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    lineEdit->setValidator(new QRegExpValidator(regExp, this));

    connect(okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
}

void GoToCellDialog::on_lineEdit_textChanged()
{
    okButton->setEnabled(lineEdit->hasAcceptableInput());
}

GoToCellDialog::~GoToCellDialog()
{
    delete ui;
}
