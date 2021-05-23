#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
using namespace std;

class Charecter
{
    public:
    Charecter(){
        cout << "конструктор Charecter" <<endl; 
    }
    int Hp;
};

class Orc : public virtual Charecter
{
    public:
    Orc()
    {
     cout << "конструктор Orc" <<endl;   
    }

};

class Warrior : public virtual Charecter
{
public:
Warrior()
{
    cout << "конструктор Warrior" << endl;
}

};

class OrcWarrior :public Orc, public Warrior
{
public:
OrcWarrior()
{
cout << "конструктор OrcWarrior" << endl;
}

};

int main(){
    setlocale(LC_ALL,"Ru");
    OrcWarrior orcw;

    return 0;
}
// Виртуальное наследование c++. Ромбовидное наследование c++