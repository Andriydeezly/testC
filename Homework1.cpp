#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
using namespace std;



main(){
setlocale(LC_ALL,"Ru");

int a,b,selection;
cout <<"Введите числа"<<endl;
cin>>a>>b;

cout << "Виберете операцию" <<endl<<
"1 Сложения"<<endl<<
"2 Віднімання"<<endl<<
"3 Множення"<<endl<<
"4 Ділення"<<endl;

cin >> selection;

switch (selection){

case 1:
cout<< "Результат додавання"<<a+b<<endl;
break;
case 2:
cout<< "Результат віднімання"<<a-b<<endl;
break;
case 3:
cout<< "Результат множення"<<a*b<<endl;
break;
case 4:
cout<< "Результат ділення"<<(float)a/b<<endl;
break;

    default:
    cout<<"Операцыя не знайдена"<<endl;
    break;
    }

	return 0;
}
//Switch. Калькулятор. Меню. Домашнее задание.  