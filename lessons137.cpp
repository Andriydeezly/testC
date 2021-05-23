#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include <fstream>
#include <memory> // бібліотека умних указателів
using namespace std;

int main(){
setlocale(LC_ALL,"Ru");

int arr[] ={24,5,23,64,};
for each (auto var in arr)
{
cout <<var<<endl;
}



// цикл  for reach для перебору всі елементів заданої  колекцій 
for (auto element : arr){
    cout << element<< endl;
}


cout<<"========================================="<<endl;

for (auto &element : arr){
    element =-1;
    cout << element<< endl;
}
return 0;
}
// Цикл foreach C++ | range-based циклы | Изучение С++ для начинающих. 