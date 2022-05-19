#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <les.h>
#include <csvreader.h>
#include <csvwriter.h>
#include<jsonreader.h>
#include <mybrowser.h>
#include <QString>
#include<QFileDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    std::vector<les> forabs(absreader *abs);
    void searchLes();
    void addLes();
    QString browse();

private:
    Ui::MainWindow *ui;
    QString filename;
    std::vector<les> lessons;
};
#endif // MAINWINDOW_H
