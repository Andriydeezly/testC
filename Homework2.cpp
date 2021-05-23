#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
using namespace std;

main(){
setlocale(LC_ALL,"Ru");

int height,width;
cout << "Введите висоту прямокутника"<< endl;
cin >> height;

cout << "Введите ширину прямокутника";
cin >> width;

for (int i=0; i<width;i++){
    for (int h = 0; h < height; h++){
        cout<<"*";
    }
    cout <<endl;
}
cout<<endl;
return 0;
}
//Вложенная конструкция. Вложенный цикл. Домашнее задание 