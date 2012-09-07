#include "myproductdialog.h"

MyProductDialog::MyProductDialog(QWidget *parent) :
    QDialog(parent),
    prodForm(new Ui::ProductForm)
{
    prodForm->setupUi(this);
    connect(prodForm->buttonBox, SIGNAL(clicked(QAbstractButton*)), this, SLOT(processButton(QAbstractButton*)));
    connect(prodForm->priceSpinbox, SIGNAL(valueChanged(double)), this, SLOT(updateTotalPrice()));
    connect(prodForm->qtySpinbox, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
}

void MyProductDialog::updateTotalPrice() {
    int qty = prodForm->qtySpinbox->value();
    double price = prodForm->priceSpinbox->value();
    double total = qty * price;
    prodForm->totalSpinbox->setValue(total);
}

void MyProductDialog::processButton(QAbstractButton* btn) {
}
