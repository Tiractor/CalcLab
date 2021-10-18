#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

private slots:
    void on_OneInput_3_clicked();

    void on_TwoInput_3_clicked();

    void on_UClear_3_clicked();

    void on_ThreeInput_3_clicked();

    void on_FourInput_3_clicked();

    void on_FiveInput_3_clicked();

    void on_SixInput_3_clicked();

    void on_SevenInput_3_clicked();

    void on_EightInput_3_clicked();

    void on_NineInput_3_clicked();

    void on_DrobSwap_clicked();

    void on_UUmnInput_3_clicked();

    void on_UDelInput_3_clicked();

    void on_UPlusInput_3_clicked();

    void on_UMinusInput_3_clicked();

    void on_UStepInput_3_clicked();

    void on_UOutput_3_clicked();

    void on_UUndoInput_3_clicked();

    void on_ZeroInput_3_clicked();

    void on_SignSwap_3_clicked();

    void on_DrobSwap_2_clicked();

    void on_Spravka_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
