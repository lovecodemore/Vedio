/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *btn_add;
    QToolButton *btn_previous;
    QToolButton *btn_play;
    QToolButton *btn_pause;
    QToolButton *btn_stop;
    QToolButton *btn_next;
    QSpacerItem *horizontalSpacer;
    QTableView *tableView;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_add = new QToolButton(centralWidget);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setAutoFillBackground(false);
        btn_add->setStyleSheet(QLatin1String("\n"
"border-image: url(:/btn_imgs/add);"));

        horizontalLayout->addWidget(btn_add);

        btn_previous = new QToolButton(centralWidget);
        btn_previous->setObjectName(QStringLiteral("btn_previous"));
        btn_previous->setAutoFillBackground(false);
        btn_previous->setStyleSheet(QLatin1String("\n"
"border-image: url(:/btn_imgs/previous);"));

        horizontalLayout->addWidget(btn_previous);

        btn_play = new QToolButton(centralWidget);
        btn_play->setObjectName(QStringLiteral("btn_play"));
        btn_play->setAutoFillBackground(false);
        btn_play->setStyleSheet(QLatin1String("\n"
"border-image: url(:/btn_imgs/play);"));

        horizontalLayout->addWidget(btn_play);

        btn_pause = new QToolButton(centralWidget);
        btn_pause->setObjectName(QStringLiteral("btn_pause"));
        btn_pause->setAutoFillBackground(false);
        btn_pause->setStyleSheet(QLatin1String("\n"
"border-image: url(:/btn_imgs/pause);"));

        horizontalLayout->addWidget(btn_pause);

        btn_stop = new QToolButton(centralWidget);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        btn_stop->setAutoFillBackground(false);
        btn_stop->setStyleSheet(QLatin1String("\n"
"border-image: url(:/btn_imgs/stop);"));

        horizontalLayout->addWidget(btn_stop);

        btn_next = new QToolButton(centralWidget);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setAutoFillBackground(false);
        btn_next->setStyleSheet(QLatin1String("\n"
"border-image: url(:/btn_imgs/next);"));

        horizontalLayout->addWidget(btn_next);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 1, 0, 1, 2);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 24));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btn_add->setText(QString());
        btn_previous->setText(QString());
        btn_play->setText(QString());
        btn_pause->setText(QString());
        btn_stop->setText(QString());
        btn_next->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
