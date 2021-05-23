#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
#include<fstream>
using namespace std;

int main(){
setlocale(LC_ALL,"Ru");

string name;
cout << "Введыть назву файлу"<<endl;
cin>> name;

ofstream fail;
fail.open(name); //створюэмо файл в папцы проекту

if (fail.is_open()) //чи відкритий файл True or False
{
cout<<"відкрили файл" + name <<endl; 
}
else{
    cout<<"Ошибка вікриття файла"<<endl;
}

fail.close(); //закриваэм файл

return 0;
}
// Работа с файлами с++. Запись в файл. c++ ofstream.