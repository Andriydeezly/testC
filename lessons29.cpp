#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
using namespace std;

main(){
setlocale(LC_ALL,"Ru");

int a,b;
a= rand();
cout << a<< endl;

//2 способ
b = rand()%10; // случайні числа до 10
cout << b<< endl;


 srand(time(NULL));

return 0;
}
//rand. srand. rand задать диапазон. srand time null. Генератора случайных чисел. randomize.