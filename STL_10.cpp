#include<iostream>
#include<string>
#include<map>

using namespace std;


int main(){
setlocale(LC_ALL,"ru");

pair<int, string> p(1, "телефон");

cout << p.first << endl;
cout << p.second << endl;

cout << "==================================" <<endl;

map<int,string> myMap;
myMap.insert(pair<int, string> (1, "телефон"));  // вставляємо створену пару
myMap.emplace(3,"монитор");  // створюэмо і добавляєм

map<string, int> newMap;
newMap.emplace("Петя", 244);
newMap.emplace("Саша", 7547);
newMap.emplace("Вася", 2346);

auto it = myMap.find(32);

if (it != myMap.end()){
    cout << "елемент не найден";
}

 cout << myMap[3] << endl;  // звертання до ключа і результат "монитор"

cout << newMap["Петя"] <<endl;

newMap["Вася"] = 53; // присвоєння нового значення

cout <<"Нове значення ключа Вася = " << newMap["Вася"] <<endl;

newMap.erase("Саша"); // видалення ключа саша
return 0;
}

