#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMediaPlayer>
#include<QMediaPlaylist>
#include<QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_add_clicked();

    void on_btn_previous_clicked();

    void on_btn_next_clicked();

    void update_current_track();
    void update_postion();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QMediaPlaylist *playlist;
    QStandardItemModel *itemModel;
};

#endif // MAINWINDOW_H
