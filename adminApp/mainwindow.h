#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "citezin.h"
#include "citezindetaildialog.h"
#include <QVector>
#include "citezin.h"



#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void handleNewCitezin();
    void saveCitezins();
    void loadCitezins();
    void userClicked();
    void searchUser();
    void removeUser();
    void editUser();
private:
    Ui::MainWindow *ui;


    QVector<Citezin*>citezinList;
};
#endif // MAINWINDOW_H
