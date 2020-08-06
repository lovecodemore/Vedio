#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMediaPlayer>
#include<QFileDialog>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // model setting
    itemModel = new QStandardItemModel;
    ui->tableView->setModel(itemModel);
    itemModel->setHorizontalHeaderLabels(QStringList()<<tr("Audio Track")<<tr("File Path"));

    //display setting
    ui->tableView->hideColumn(1);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);

    // player setting
    player = new QMediaPlayer(this);
    player->setVolume(70);
    player->setPlaybackRate(2.0);


    // playlist setting
    playlist = new QMediaPlaylist(player);
    player->setPlaylist(playlist);
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    //signal & slots

    connect(ui->btn_play,  SIGNAL(clicked()), player, SLOT(play()));
    connect(ui->btn_pause,  SIGNAL(clicked()), player, SLOT(pause()));
    connect(ui->btn_stop,  SIGNAL(clicked()), player, SLOT(stop()));

    connect(playlist, SIGNAL(currentMediaChanged(QMediaContent)), this, SLOT(update_current_track()));

//connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(update_postion()));

}

//void MainWindow::update_postion()
//{
//    ui->progressBar->setValue(player->position());
//}
MainWindow::~MainWindow()
{
    delete ui;
    //delete player;
    //delete playlist;
    //delete itemModel;
}

void MainWindow::update_current_track()
{
    QString str = QDir(playlist->media(playlist->currentIndex()).canonicalUrl().toString()).dirName();
    if(str == ".")
    {
        ui->label->setText(QDir(playlist->media(playlist->currentIndex()+1).canonicalUrl().toString()).dirName());
    }
    else
    {
        ui->label->setText(QDir(playlist->media(playlist->currentIndex()).canonicalUrl().toString()).dirName());
    }
}

void MainWindow::on_btn_add_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this, "Select Files", ".", "Mp3 File(*.mp3)");

    foreach(QString filePath, files)
    {
        QList<QStandardItem*> items;
        items.append(new QStandardItem(QDir(filePath).dirName()));
        items.append(new QStandardItem(filePath));

        playlist->addMedia(QUrl::fromLocalFile(filePath));
        itemModel->appendRow(items);
    }
}















void MainWindow::on_btn_previous_clicked()
{
    playlist->previous();
    QString str = QDir(playlist->media(playlist->currentIndex()).canonicalUrl().toString()).dirName();
    if(str == ".")
    {
        ui->label->setText(QDir(playlist->media(playlist->currentIndex()+1).canonicalUrl().toString()).dirName());
    }
    else
    {
        ui->label->setText(QDir(playlist->media(playlist->currentIndex()).canonicalUrl().toString()).dirName());
    }
}

void MainWindow::on_btn_next_clicked()
{
    playlist->next();
    QString str = QDir(playlist->media(playlist->currentIndex()).canonicalUrl().toString()).dirName();
    if(str == ".")
    {
        ui->label->setText(QDir(playlist->media(playlist->currentIndex()+1).canonicalUrl().toString()).dirName());
    }
    else
    {
        ui->label->setText(QDir(playlist->media(playlist->currentIndex()).canonicalUrl().toString()).dirName());
    }
}
