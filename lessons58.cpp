#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
using namespace std;

void FillArray(int* const arr, const int size){
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() %10;
    }
    
}


void ShowArray(const int* const arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout <<endl;
}

void push_back(int *&arr, int &size, const int value){
int *newArray =new int [size+1];

for (int i = 0; i < size; i++)
{
    newArray[i] = arr[i];
}
newArray[size] = value; //добавляєм в останній елемент нове значення
size++;

delete[]arr;
arr = newArray; // присвоюєм ссилку на перший елемент нового масива
}

void pop_back(int *&arr, int &size){
    size--; // удаляєм останній елемен масива
int *newArray = new int[size];
for (int i = 0; i < size; i++)
{
    newArray[i] = arr[i];
}

delete[] arr;
arr = newArray;
}

int main(){
int size =10;
int *firstArray =new int[size];
int *secondArray = new int [size];



FillArray(firstArray, size);
FillArray(secondArray, size);

cout << "FirstArray =  \t";
ShowArray(firstArray, size);

cout << "SecondArray =  \t";
ShowArray(secondArray, size);

delete[]firstArray;
firstArray = new int [size];   // Створюєм копію першого масиву 
for (int i=0; i < size; i++){
firstArray[i] = secondArray[i]; // Переносим дані з першого в другий
}


cout << "========================================================"<< endl;

cout << "FirstArray =  \t";
ShowArray(firstArray, size);

cout << "SecondArray =  \t";
ShowArray(secondArray, size);


delete[]firstArray;
delete[]secondArray;


//Изменить размер массива. Удалить. Добавить элемент в массив. 
int size =7;
int *arr1= new int[size];

FillArray(arr1, size);
ShowArray(arr1,size);

push_back(arr1,size, 34);  // добавляєм останній елемент
ShowArray(arr1,size);

pop_back(arr1, size);  // удаляєм останній елемент
ShowArray(arr1,size);


delete[] arr1;
}
//Копирование динамического массива c++. Скопировать массив с++. 