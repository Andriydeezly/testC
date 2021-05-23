#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
using namespace std;

class IBysicle{

public:
void virtual TwistTheWheel() = 0;
void virtual RideOn() = 0;
};

class Simplebysicle : public IBysicle
{
public:
void TwistTheWheel() override
{
cout << "метод TwistTheWheel " <<endl;
}
void RideOn() override
{
cout << "метод RideOn " <<endl;
}
};

class Human{

public:
void RideOn(IBysicle & bisecle){
cout << "Крутим руль" << endl;
bisecle.TwistTheWheel();
cout << "Поєхали" << endl;
bisecle.RideOn();

}
};

main(){
setlocale(LC_ALL,"Ru");
Simplebysicle sb;

	Human human;
	human.RideOn(sb);

	return 0;
}
//Что такое интерфейс в ООП. Интерфейс c++ пример. 