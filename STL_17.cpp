#include<iostream>
#include<algorithm>
#include<vector>
#include<list>
#include<string>

using namespace std;

int main(){
    setlocale(LC_ALL,"ru");
// Поиск максимального элемента | max_element c++

// vector
vector<int> v = {35,6,747,2,967,547,444,25};
auto result = max_element(v.begin(),v.end());
cout<< "MAX eлемент вектора=  " << *result << endl;


// List
list<int> lst= {35,54,235,124,67,8,40,73};
auto resoltL = max_element(lst.begin(),lst.end());
cout << "Max елемент списку= " << *resoltL << endl;

// масив
const  int size = 7;
int arr[size] = {36,57,234,79,960,345,12};
auto resultM = max_element(arr,arr+size);
cout<< *resultM<< endl;

// Поиск минимального элемента | min_element c++
const  int size = 7;
int arr[size] = {36,57,234,79,960,345,12};
auto Min = min_element(arr,arr+size);
cout<< *Min<< endl;


    return 0;
}
// Поиск максимального элемента | max_element c++ 
// Поиск минимального элемента | min_element c++