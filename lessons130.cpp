#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include <fstream>
#include <memory> // бібліотека умних указателів
using namespace std;

template <typename T>
class SmartPointer
{
public:
    SmartPointer(T *ptr)
    {
        this->ptr = ptr;
    }

    ~SmartPointer()
    {
        delete ptr;
    }

private:
    T *ptr;
};

T& operator*()
{
    return *ptr;
}

int main()
{
    setlocale(LC_ALL, "Ru");

    int *ptr = new int(5);

    delete ptr;

    // умний указатель  shared_ptr<>
    int size;
    cin>> size;
    shared_ptr<int[]> ptr(new int[size]{24, 23, 525, 2});

    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 10;
        cout << ptr[i] << endl;
    }
    return 0;
}
// Умные указатели. Smart pointers.