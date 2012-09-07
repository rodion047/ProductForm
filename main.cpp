#include <QtGui/QApplication>
#include "myproductdialog.h"
#include "mainwindow1.h".h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyProductDialog pd;
    MainWindow1 w;
    pd.show();

    return a.exec();
}
