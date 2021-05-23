#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ru");

string path = "myFile.txt";

ifstream fil;
fil.open(path);

if (!fil.open()){
    cout << "Ошибка открите файла" << endl;
}
else{
    cout <<"Файл открит" << endl;
    char ch;
    string str;
    while (fil.get(ch)) // читання файла по символьно
    {
        cout <<ch;
    }
    
    while (!fil.eof()){ // читання файла по строчно до прабела
        str = ""; // затирання старих значень
        fil >>str;
        cout << str <<endl;
    }

     while (!fil.eof()){ // читання файла по строчно
        str = ""; // затирання старих значень
        getline(fil, str);
        cout << str <<endl;
    }
}
fil.close();

return 0;
}    
//Работа с файлами с++. Чтение из файла с++ ifstream.