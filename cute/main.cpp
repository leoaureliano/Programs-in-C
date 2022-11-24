#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow),
{
    ui->setupUi(this);
    timer = new QTimer(this)
    timer->setInterval(100);
    connect(timer, SIGNAL(timeout()), this, SLOT(TimerTick()));
}

MainWindow:~MainWindown()
{
    delete ui;
}

void MainWindow::SetupGame()
{
    srand(time(NULL));
    QList<QString>* animalEmoji =
            new QList<QString>(std::initializer_list<QString>
                               {
                                   "🐱‍👤", "🐱‍👤",
                                   "🐒","🐒",
                                   "🦥","🦥",
                                   "🐘","🐘",
                                   "🦔","🦔",
                                   "🐍","🐍",
                                   "🦀","🦀",
                                   "🦞","🦞",
                               });
}
