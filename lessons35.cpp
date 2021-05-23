#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
using namespace std;

//заповнення масиву
void Fillarray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 10;
    }
}

//вивід масиву
void Printarray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

void main()
{
    setlocale(LC_ALL, "Ru");
    const int size = 10;
    int mass[size];

    Fillarray(mass, size);
    Printarray(mass, size);
}
//Передача массива в функцию. Как передать массив в функцию.