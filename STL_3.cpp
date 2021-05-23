#include<iostream>
#include<list>
#include<vector>

using namespace std;

template<typename T>
void PrintList(const list<T> &lst){
for (auto i = lst.cbegin();i != lst.cend(); ++i){
    cout << *i << endl;
}
}


int main(){
    setlocale(LC_ALL,"ru");

list<int> myList = {235,3,36,56};

myList.push_back(5);
myList.push_front(2);

list<int>::iterator it = myList.begin();  // вказує на перший елемент списку

cout<< *it << endl;

for(auto i = myList.begin(); i !=myList.end(); i++){
    cout << *i << endl;
}


cout <<"Sortuvannya===================="<<endl;
myList.sort(); // сортування

cout <<"Видалення===================="<<endl;
myList.pop_back(); // видалення останнього

cout <<"Кылькысть елементыв===================="<<endl;
cout << "Кылькысть = " << myList.size(); // розмір списку


return 0;
}

//LIST | STL C++ | Библиотека стандартных шаблонов (stl)

