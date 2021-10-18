#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QMessageBox>
#include <cmath>
#include <string>

static char Operation = ' ';
static bool Drob = false; // Работаем не с Дробной частью Переменной

static char sign = '+';
static long long int Cal = 0;
static long long int After = 0; // Для дробей после точки
static QString Out;

static char Tempsign = '+';
static long long int Temp = 0; // Доп. Переменная
static long long int TempAfter = 0; // Для дробей после точки для Доп. Переменной
static QString SecondOut;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void Outputing(){
    if (Cal < 0){
        sign = '-';
        Cal = abs(Cal);
    }
    Out = sign;
    Out.append(QString::number(Cal));
    Out.append('.');
    Out.append(QString::number(After));
}

void WorkingCalc(char x){
    if (Drob){
        if (x == '1'){
            After*=10;
            After+=1;
        }
        else if (x == '2'){
            After*=10;
            After+=2;
        }
        else if (x == '3'){
            After*=10;
            After+=3;
        }
        else if (x == '4'){
            After*=10;
            After+=4;
        }
        else if (x == '5'){
            After*=10;
            After+=5;
        }
        else if (x == '6'){
            After*=10;
            After+=6;
        }
        else if (x == '7'){
            After*=10;
            After+=7;
        }
        else if (x == '8'){
            After*=10;
            After+=8;
        }
        else if (x == '9'){
            After*=10;
            After+=9;
        }
        else if (x == '0'){
            After*=10;
        }
    }
    else{
        if (x == '1'){
            Cal*=10;
            Cal+=1;
        }
        else if (x == '2'){
            Cal*=10;
            Cal+=2;
        }
        else if (x == '3'){
            Cal*=10;
            Cal+=3;
        }
        else if (x == '4'){
            Cal*=10;
            Cal+=4;
        }
        else if (x == '5'){
            Cal*=10;
            Cal+=5;
        }
        else if (x == '6'){
            Cal*=10;
            Cal+=6;
        }
        else if (x == '7'){
            Cal*=10;
            Cal+=7;
        }
        else if (x == '8'){
            Cal*=10;
            Cal+=8;
        }
        else if (x == '9'){
            Cal*=10;
            Cal+=9;
        }
        else if (x == '0'){
            Cal*=10;
        }
    }

    Outputing();
}

int SizeInt(long long int x){
    int count = 0;
    while (x > 0){
        count++;
        x /=10;
    }
    return count;
}

void PodgonDrob(){
    int x = SizeInt(After) - SizeInt(TempAfter);
    if(x >= 0){
        TempAfter *= pow(10,x);
    }
    else {
        x*=-1;
        After *= pow(10,x);
    }
}

void Plus(){
    int a = SizeInt(After);// Исходная Длина After
    After += TempAfter;
    if (a < SizeInt(After)){
        Cal ++;
    }
    After %= int(pow(10,a));
}

void OperationMinus(long long A, long long a, long long B, long long b){
    Cal = A - B;
    if (a < b){
        Cal--;
    }
    After = a - b;
    if ( 0 > After){
        if (Cal != 0){
        Cal--;
        After = int(pow(10,a)) + After;
        }
        else{
            sign = '-';
            After *=-1;
        }

    }
}

int Sravn(){
    int C;
    if (Cal > Temp){
        C = 0;
    }
    else if (Cal == Temp){
        if (After > TempAfter) C = 0;
        else if (After == TempAfter) C = 2;
        else C = 1;
    }
    else C = 1;
    return C;
} // 0 - Текущее больше прошлого. 1 - Прошлое больше текущего. 2 - они равны

void CommandInit(){
    SecondOut =sign;
    SecondOut.append(QString::number(Cal));
    SecondOut.append('.');
    SecondOut.append(QString::number(After));
    Tempsign = sign;
    Temp = Cal;
    TempAfter = After;
    Cal = 0;
    After = 0;
    sign = '+';
    Drob = false;
    Outputing();
}

void MainWindow::on_OneInput_3_clicked()
{
    WorkingCalc('1');
    ui->Output_3->setText(Out);
}

void MainWindow::on_TwoInput_3_clicked()
{
    WorkingCalc('2');
    ui->Output_3->setText(Out);
}

void MainWindow::on_UClear_3_clicked()
{
    Cal = 0;
    After = 0;
    sign = '+';
    Outputing();
    Temp = 0;
    TempAfter = 0;
    Tempsign = '+';
    SecondOut = QString::number(Cal);
    SecondOut.append('.');
    SecondOut.append(QString::number(After));
    ui->MainChisl->setText(SecondOut);
    ui->Output_3->setText(Out);
}

void MainWindow::on_ThreeInput_3_clicked()
{
    WorkingCalc('3');
    ui->Output_3->setText(Out);
}

void MainWindow::on_FourInput_3_clicked()
{
    WorkingCalc('4');
    ui->Output_3->setText(Out);
}

void MainWindow::on_FiveInput_3_clicked()
{
    WorkingCalc('5');
    ui->Output_3->setText(Out);
}

void MainWindow::on_SixInput_3_clicked()
{
    WorkingCalc('6');
    ui->Output_3->setText(Out);
}

void MainWindow::on_SevenInput_3_clicked()
{
    WorkingCalc('7');
    ui->Output_3->setText(Out);
}

void MainWindow::on_EightInput_3_clicked()
{
    WorkingCalc('8');
    ui->Output_3->setText(Out);
}

void MainWindow::on_NineInput_3_clicked()
{
    WorkingCalc('9');
    ui->Output_3->setText(Out);
}



void MainWindow::on_DrobSwap_clicked()
{
    if(Drob) Drob = false;
    else Drob = true;
}

void MainWindow::on_UUmnInput_3_clicked()
{
    Operation = '*';
    CommandInit();
    ui->Output_3->setText(Out);
    ui->MainChisl->setText(SecondOut);
}

void MainWindow::on_UDelInput_3_clicked()
{
    Operation = '/';
    CommandInit();
    ui->Output_3->setText(Out);
    ui->MainChisl->setText(SecondOut);
}

void MainWindow::on_UPlusInput_3_clicked()
{
    Operation = '+';
    CommandInit();
    ui->Output_3->setText(Out);
    ui->MainChisl->setText(SecondOut);
}

void MainWindow::on_UMinusInput_3_clicked()
{
    Operation = '-';
    CommandInit();
    ui->Output_3->setText(Out);
    ui->MainChisl->setText(SecondOut);
}

void MainWindow::on_UStepInput_3_clicked()
{
    Operation = '^';
    CommandInit();
    ui->Output_3->setText(Out);
    ui->MainChisl->setText(SecondOut);
}

void BrainFuck(){
    // Это все обманка
    float Cur = Cal + After/pow(10,SizeInt(After));
    float Prev = Temp + TempAfter/pow(10,SizeInt(TempAfter));
    Cur *=Prev;
    Cal = long(Cur);
    After = (Cur-long(Cur))*pow(10,SizeInt(After)+SizeInt(TempAfter));
    if(sign != Tempsign) sign = '-';
    else sign = '+';
}

void GitFuck(){
    float Cur = Cal + After/pow(10,SizeInt(After));
    float Prev = Temp + TempAfter/pow(10,SizeInt(TempAfter));
    Prev /= Cur;
    Cal = long(Prev);
    After = (Prev-long(Prev))*pow(10,SizeInt(After)+SizeInt(TempAfter));
    if(sign != Tempsign) sign = '-';
    else sign = '+';


}

void MainWindow::on_UOutput_3_clicked()
{
    PodgonDrob();
    if (Operation == '+'){
        if (sign == Tempsign){
            Cal+=Temp;
            Plus();
        }
        else {
            if (Sravn() == 0){
                if (sign == '+') sign = '+';
                else sign = '-';
            }
            else{
                if (Tempsign == '+') sign = '+';
                else sign = '-';
            }
            if (Sravn() == 0 || Sravn() == 2) OperationMinus(Cal,After,Temp,TempAfter);
            else if (Sravn() == 1) OperationMinus(Temp,TempAfter,Cal,After);
        }
    }
    else if (Operation == '-'){
        if (sign != Tempsign){
            if(sign == '+') sign = '-';
            else sign = '+';
            Cal+=Temp;
            Plus();
        }
        else{
            if (Sravn() == 0 || Sravn() == 2){
                sign = '-';
                OperationMinus(Cal,After,Temp,TempAfter);
            }
            else{
                OperationMinus(Temp,TempAfter,Cal,After);
            }
        }
    }
    else if (Operation == '*'){
        BrainFuck();
    }
    else if (Operation == '/'){
        GitFuck();
    }
    Outputing();
    ui->Output_3->setText(Out);
    CommandInit();
    ui->Output_3->setText(SecondOut);
}

void MainWindow::on_UUndoInput_3_clicked()
{
    if (Drob) After /=10;
    else Cal /=10;
    Outputing();
    ui->Output_3->setText(Out);
}

void MainWindow::on_ZeroInput_3_clicked()
{
    WorkingCalc('0');
    ui->Output_3->setText(Out);
}

void MainWindow::on_SignSwap_3_clicked()
{
    if(sign == '+') sign = '-';
    else sign = '+';
    Outputing();
    ui->Output_3->setText(Out);
}

void MainWindow::on_DrobSwap_2_clicked()
{

}

void MainWindow::on_Spravka_clicked()
{
    QMessageBox::about(this, "Информация", "Функции Сложения и Вычитания принимают на вход числа большие, чем умножения и деления. Калькулятор не поддерживает последовательный ввод команд, поэтому каждый раз необходимо снова вводить одно число, потом функцию и снова число. Для получения выходного числа нажмите на кнопку '='.");
}
