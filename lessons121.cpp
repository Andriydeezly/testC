#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include<fstream>
using namespace std;

void Foo(int a){

if (a<10){
    throw a;
}

cout << "Переменная =  " << a <<endl;
}

int main(){

setlocale(LC_ALL, "ru");

try
{
    Foo(24);
}
catch(const int ex)
{
    cout << "Ми поймали  " << ex << endl;
}

return 0;
}