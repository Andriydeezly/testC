#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
using namespace std;

void main(){
    int size = 10;
    int *arr =new int [size];
    delete [] arr;

for (int i = 0; i < size; i++)
{

arr[i] =rand() %10; 
}
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
        cout << arr + i << "\t"; // арифметика указателей 
        cout << *(arr +i);
    }


    // Двумерный динамический массив c++ пример.
int rows =6;
int cols =9;

int **arr1 = new int* [rows];
for (int k=0; k< rows; k++){
    arr1[k] = new int[cols];
}
//////////////////////////заповнення масиву
for (int k= 0; k < rows; k++)
{
    for (int j= 0; j < cols; j++)
    {
        arr1[k][j] = rand() %20;
    }
}
//////////////////////////заповнення масиву

//////////////////////////вивыд масива
for (int k= 0; k < rows; k++)
{
    for (int j= 0; j < cols; j++)
    {
       cout << arr1[k][j] << "\t";
    }
    cout << endl;
}
//////////////////////////вивыд масива

for (int k = 0; k < rows; k++)
{
    delete [] arr1[k];
}

delete [] arr1;

}
//Динамический массив с++ пример. 
//Создание, заполнение, удаление, размер динамического массива.