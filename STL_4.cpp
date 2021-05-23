#include <iostream>
#include <forward_list>

using namespace std;


int main(){
setlocale(LC_ALL,"ru");

    forward_list<int> fl;

fl.push_front(1);
fl.push_front(35);
fl.push_front(2);

for(auto el : fl){
cout<< el <<endl;
}

cout <<endl<< "Новий метод"<<endl;

forward_list<int>::iterator it = fl.begin(); // вказує на перший елемент
it++;  // сдвиг вправо
cout << *it <<endl;

fl.insert_after(it,343); // добавим 343 наступним після it 

for (auto el : fl){
    cout << el << endl;
}

cout <<"Видалимо елемен=============="<<endl;

fl.erase_after(it);

for (auto el : fl){     // delete 343
    cout << el << endl;
}


return 0;
}
//forward list stl c++ | Библиотека стандартных шаблонов (stl) 