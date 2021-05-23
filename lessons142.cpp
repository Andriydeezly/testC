#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include<vector>
#include<functional>
#include<fstream>
using namespace std;

union Myunion
{
    short int a;
    int b;
    float c;
};

void Foo(int a)
{
    if (a>10 && a<40){
        cout << a <<endl;
    }
}

void Bar(int a){
    if (a%2 == 0)
    {
        cout << a << endl;
    }
}

void DoWork(vector<int> &vc, function<void(int)> f){

    for (auto el : vc){
        f(el);
    }
}

int main(){
setlocale(LC_ALL,"ru");

Myunion u;

u.a =5;
u.b = 353;
u.c =334.32;

//std::function | Полиморфная обёртка функции |
cout <<endl<<endl;
cout << "std::function | Полиморфная обёртка функции |"<<endl;

vector<int> vc = {2,34,326,5,7,57,79,9,35,523};
DoWork(vc,Foo);

return 0;
}
// Union | Использование в С++ | Изучение С++ для начинающих
// std::function | Полиморфная обёртка функции | Изучение С++ для начинающих.