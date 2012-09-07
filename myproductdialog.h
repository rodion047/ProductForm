#ifndef MYPRODUCTDIALOG_H
#define MYPRODUCTDIALOG_H

#include <QDialog>
#include "ui_productform.h"

class MyProductDialog : public QDialog
{
    Q_OBJECT
public:
    explicit MyProductDialog(QWidget *parent = 0);

signals:

public slots:
    void processButton(QAbstractButton* btn);
    void updateTotalPrice();

private:
    Ui::ProductForm* prodForm;

};

#endif // MYPRODUCTDIALOG_H
