#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include<fstream>
using namespace std;


void foo(int var){

    if (var < 30){
        throw exception("Число менше 30 !!");
    }
if (var == 0){
    throw exception("Число ровно 0 !!");
}

if (var == 10){
    throw exception("Число ровно 10 !!");
}


    cout << "Переменная = " << var << endl;
}


int main(){
    setlocale(LC_ALL, "ru");

try
{
 foo(24);
}

catch(exception &ex)
{
    cout << "Блок 1 Ми поймали " << ex.what() << endl;
}

catch(const char *ex)
{
    cout << "Блок 2 Ми поймали " << ex << endl;
}
catch(...){    //// всы кетчы якы можуть бути
 cout << "ШОсь не так ";
}

    return 0;
}