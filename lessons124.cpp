#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include<fstream>
using namespace std;

enum PCstate
{
    OFF, ON, SLEEP
};

class PC
{
    public:
    PCstate GetState(){
        return State;
    }

void Setstate(PCstate State){
    this->State = State;
}
    private:
PCstate State;

};

int main(){
setlocale(LC_ALL,"Ru");

PC pc;
pc.Setstate(PCstate::ON);
if (pc.GetState()==PCstate::ON){
    cout << "Работаэт";
}


switch (pc.GetState())
{
case PCstate::ON:
cout << "Включон" <<endl;
    break;

case PCstate::OFF:
cout << "Виключен" <<endl;
    break;

case PCstate::SLEEP:
cout << "Спит" <<endl;
    break;
}
}
//Перечисляемый тип enum С++. 