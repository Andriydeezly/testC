#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
using namespace std;

void Foo(int *pa, int *pb, int *pc){
(*pa) = 555;
(*pb)++;
(*pc) = -25;
}
int main(){
setlocale(LC_ALL,"Ru");


/*//указатель px на адрес а
int a =5;
int *px =&a;
cout << *px <<endl;

//арифметика указателів
const int Size =5;
int arr[Size] {4,2,12,663,3};

for(int i = 0; i < Size; i++)
{
    cout<< arr[i] <<endl;
}

cout << "======================================================" <<endl;

int *pArr = arr;

cout << "arr\t" << arr<<endl;
cout << "pArr\t" << pArr <<endl;

cout << "======================================================" <<endl;

for(int i = 0; i < Size; i++)
{
    cout << pArr[i] <<endl;
    cout << "==================================="<<endl;
    cout<< *(arr+2)<<endl;  // получим значення елементу масиву з ындексом [2] 
}*/

//Передача параметров в функцию по указателю c++
/*int a=0;
cout<< a << endl;
Foo(&a);
cout << a << endl;*/


//Возврат нескольких значений функции через указатели. 
int a = 0;
int b = 0;
int c = 0;
cout << "a=  " << a <<endl;
cout << "b=  " << b <<endl;
cout << "c=  " << c <<endl;

cout << "Foo()" <<endl;
Foo(&a, &b, &c);

cout << "a=  " << a <<endl;
cout << "b=  " << b <<endl;
cout << "c=  " << c <<endl;
 
}
//Что такое динамическая память. Утечка памяти. 