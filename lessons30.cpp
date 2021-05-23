#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
using namespace std;

void main(){
const int raw =3;
const int col =5;

int arr[raw] [col];
int arr1[raw] [col];
cout <<arr[1] [2]<<endl;

 arr[1][2] = 33;
 cout <<arr[1][2]<<endl;

 //2 part
 int arr1[raw][col]{{2,42,1,24,6},{53,3,11,12,64},{64,34,88,78,30}};
 cout<<arr1[3][4]<<endl;

 //заповнення масиву
 for (int i = 0; i < raw; i++)
 {
    for (int k = 0; i < col; k++)
    {
        arr[i][k] = rand()%10;
    }
 }
//вивід масиву через табуляцію
 for (int i = 0; i < raw; i++)
 {
    for (int k = 0; i < col; k++)
    {
        cout<< arr[i][k] << "\t";
    }
    cout<<endl;
 }

}
//Двумерный массив инициализация. Двумерный массив индексы. Синтаксис. 