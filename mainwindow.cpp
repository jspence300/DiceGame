#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Roll1_clicked()
{
    die1 = (rand() % 6) + 1;
    ui->Roll1->setText(QString::number(die1));
    updateTotal();
}


void MainWindow::on_Roll2_clicked()
{
    die2 = (rand() % 6) + 1;
    ui->Roll2->setText(QString::number(die2));
    updateTotal();
}

void MainWindow::on_Roll3_clicked()
{
    die3 = (rand() % 6) + 1;
    ui->Roll3->setText(QString::number(die3));
    updateTotal();
}
void MainWindow::updateTotal()
{
    total = die1 + die2 + die3;
    ui->dispTotal->setText(QString::number(total));
}

void MainWindow::on_dispTotal_linkActivated(const QString &link)
{
    ui->dispTotal->setText(QString::number(total));
}
