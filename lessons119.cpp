#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include<fstream>
using namespace std;

class Point
{
public:
Point(){
    x = y = z =0;  
}
Point(int x, int y, int z){
    this->x = x;
    this->y = y;
    this->z = z;
} 
int x;
int y;
int z;
};

ostream& operator<<(ostream& os, const Point& point){ // перегрузка оператора <<

os << point.x << " " << point.y << " " << point.z;
return os;
}

istream& operator>>(istream& is, Point& point){ // перегрузка оператора >> считування

is >> point.x >> point.y >> point.z;
return is;
}

main(){
setlocale(LC_ALL,"Ru");

Point point(24,42,64);
cout << point;

string path = "myFile.txt"; // ымя файла
fstream fil;
fil.open(path, fstream::in | fstream::out | fstream::app);

if (!fil.is_open()){
    cout << "Ошибка открите файла" << endl;
}
else{
    cout <<"Файл открит" << endl;
    fil << point << "\n";

while (true){
    Point ip;
    fil >> ip; // считування даних з файлу
    if (fil.eof()){
        break;
    } 
    cout << ip << endl;
    }
}
fil.close();
}
// Потоковый ввод вывод в файл c++. Перегрузка операторов.