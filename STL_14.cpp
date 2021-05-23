#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool Mypred(int a, int b){
    return a>b;   // предикат для сортування
}

class Person{
    public:
    Person(string name,double score){
        this->Name = name;
        this->Score = score;
    }
    bool operator()(const Person &p){
        return p.Score >180;
    }

    string Name;
        double Score;
};

int main(){
    setlocale(LC_ALL,"ru");

    vector<int> v = {342,35,76,78,76,235};

    sort(v.begin(),v.end(),Mypred);

    return 0 ;

    for (auto element : v){
        cout << element <<endl;
    }

    cout << "========================Сотування масиву======================= "<<endl;

    const int size =7;
    int arr[size] = {46,84,9767,23,1,2};
    sort(arr, arr+size, [](int a,int b){return a>b;});

    for (auto element : arr){
        cout << element <<endl;
    }

    cout << "========================Сотування масиву (задача)======================= "<<endl;
vector<Person> people{
    Person("Вася",32),
    Person("Петя",332),
    Person("Саша",102),
    Person("Коля",196),
    Person("Андрей",180),
    Person("Иван",323),
    Person("Даша",172),
    Person("Катя",181),
    Person("Слава",192),
    Person("Маша",200),
};
sort(people.begin(),people.end(), [](const Person &p1, const Person &p2){return p1.Name>p2.Name;});


for (auto element : people){
        cout << "Имя:\t" << element.Name << "\tБалли\t" << element.Score <<endl;
    }


}
// STL Алгоритмы сортировки | Бинарный предикат | Лямбда функции | C++