#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool ThaZero(int a)
{ // числа більші нуля
    return a > 0;
}

bool LessZero(int a)
{ // числа менші нуля
    return a < 0;
}

class Person
{
    public:
    Person(string name, double score)
    {
this->Name = name;
this->Score = score;
    }
bool operator()(const Person &p){
    return p.Score > 180;
}

string Name;
double Score;
};


int main()
{
    setlocale(LC_ALL, "ru");

    vector<int> v = {325, 35, -35, 53 - 322, 68, 32};
    count_if(v.begin(), v.end(), ThaZero);
    int result = count_if(v.begin(), v.end(), ThaZero); // кількість чисел менші або більші нуля
    cout << result << endl<<"Студенти з балам "<<endl;

vector<Person> people{
    Person("Петя",190),
    Person("вася",90),
    Person("Сергій",130),
    Person("Маша",134),
    Person("Іван",182),
    Person("Ліля",154),
    Person("Андрій",180),
    Person("Петя",10),
    Person("Слава",182),    
};

int ball = count_if(people.begin(),people.end(),people.front());
cout << ball <<endl;
}
//Предикаты с++ | Что такое предикат | Изучение С++ для начинающих.