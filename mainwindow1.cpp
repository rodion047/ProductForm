#include "mainwindow1.h"
#include "ui_mainwindow1.h"

MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);
    connect(ui->action_Close, SIGNAL(triggered()), this, SLOT(on_File_Close()));
}

void MainWindow1::on_File_Close() {
    ui->lineEdit->setText("File->Close has been clicked.");
}

MainWindow1::~MainWindow1()
{
    delete ui;
}
