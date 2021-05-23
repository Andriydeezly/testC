#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include <fstream>
#include<Windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

string path = "myFile.txt";
string msg;

fstream fil;
fil.open(path, fstream::in | fstream::out | fstream::app);

if (!fil.is_open()){
    cout << "Ошибка открите файла" << endl;
}
else{
    int value;
    cout <<"Файл открит" << endl;
   cout << "Нажмите 1 для записи сообщения" << endl;
   cout << "Нажмите 2 для считування всех сообщений" << endl;
   cin >> value;

   if (value == 1){
       SetConsoleCP(1251); // кодіровка для  консолі для російських букв
cin >> msg;
fil << msg << "\n";
SetConsoleCP(866); // вертаэться кодыровка стара
   }
   
   if (value == 2){
       while (!fil.eof()){
           msg = ""; // затираэм минуле сообщения
           fil>> msg;
           cout << msg << endl;

       }

   }
}
fil.close();

return 0;
}
//Чтение и запись в файл с++ используя класс fstream c++. 