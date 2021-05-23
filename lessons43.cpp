#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
using namespace std;

/*int Foo(int a){

    
    if (a<1)
    return 0;
    a--;
    cout << a <<endl;
    return Foo(a);}*/

int Fact(int N){

if (N==0)
    return N* Fact(N-1);

    if (N==1)
    return 1;

    return N * Fact(N-1);
}

void main(){
    setlocale(LC_ALL, "Ru");

//Foo(5);
cout<< Fact(5)<< endl;

}    
//Рекурсия программирование. Рекурсия и цикл. Рекурсия с++. Факториал числа c++ рекурсивно. 