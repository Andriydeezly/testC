#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class IAction
{
    public:
    virtual void Action() =0;
};

class CatAction :public IAction
{
    virtual void Action() override
    {
        cout << "Гладити кота" <<endl;
    }
};

class TeaAction : public IAction
{
    virtual void Action() override
    {
        cout << "Пэм чай " <<endl;
    }
};


class DogAction : public IAction
{
    virtual void Action() override
    {
        cout << "Гуляэм собакою" <<endl;
    }
};


class SleepAction : public IAction
{
    virtual void Action() override
    {
        cout << "Спим" <<endl;
    }
};

int main(){
setlocale(LC_ALL,"ru");

srand(time(NULL));
IAction* arr[] = 
{
    &CatAction(),
    &DogAction(),
    &TeaAction(),
    &SleepAction()
};

random_shuffle(begin(arr), end(arr));

for(auto &element : arr){
element->Action();
}
cout << endl;


    return 0;
}
//Отсортировать массив в случайном порядке | random_shuffle