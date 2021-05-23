#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
using namespace std;

template <typename T1, typename T2>
T1 Sum(T1 a, T2 b)
{
    return a + b;
}

void main()
{
    setlocale(LC_ALL, "Ru");
    cout << Sum(5, 10) << endl;

    cout << Sum(24.2, 141) << endl;
}
//Шаблоны функций. Шаблонные функции c++. template typename. template class