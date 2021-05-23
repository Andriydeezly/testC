#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include<fstream>
using namespace std;


class MyClass
{
    int a =10;

void Print() { cout << a <<endl;}
};


struct Strukt
{
    int a =22;
void Print() { cout << a <<endl;}
};


int main(){
setlocale(LC_ALL, "Ru");

MyClass m;
Strukt s;


s.Print();
return 0;
}
//Структуры в C++ | struct C++. Разница между структурой и классом. 