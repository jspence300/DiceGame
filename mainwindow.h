#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    int die1, die2, die3 = 0;
    int total = 0;
    void updateTotal();


private slots:


    void on_Roll1_clicked();

    void on_Roll2_clicked();

    void on_Roll3_clicked();

    void on_dispTotal_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;



};

#endif // MAINWINDOW_H
