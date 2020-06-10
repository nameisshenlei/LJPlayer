#ifndef LJPLAYERMAINWINDOW_H
#define LJPLAYERMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LJPlayerMainWindow; }
QT_END_NAMESPACE

class LJPlayerMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    LJPlayerMainWindow(QWidget *parent = nullptr);
    ~LJPlayerMainWindow();

private:
    Ui::LJPlayerMainWindow *ui;
};
#endif // LJPLAYERMAINWINDOW_H
