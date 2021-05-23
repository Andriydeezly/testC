#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
using namespace std;

int Sum(int a, int b){

return a+b;
}

int Sum(int a, int b, int c){

return a+b+c;
}

double Sum(double a, double b){

return a+b;
}

int main()
{
    setlocale(LC_ALL, "Ru");

cout <<Sum(7, 8)<< endl;
cout <<Sum(4.2, 4.56)<< endl;
cout<< Sum(25, 5, 24)<< endl;
}
//Перегрузка функций c++ пример.Что такое перегрузка функций. Как перегрузить функцию.    
