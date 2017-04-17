#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sysinfo.h"
#include "cpuwidget.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    mCpuWidget(this)
{

    ui->setupUi(this);
    SysInfo::instance().init();
    ui->centralWidget->layout()->addWidget(&mCpuWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
