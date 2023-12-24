#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Secdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onPlayNowClicked();  // Slot to handle the "Play Now" button click

private:
    Ui::MainWindow *ui;
    SecDialog *secDialog;  // Corrected typo here

};
#endif // MAINWINDOW_H
