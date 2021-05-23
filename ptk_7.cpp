#include<iostream>
#include<mutex>
#include<thread>
//#include"SimpleTime.h"   клас в окремому файлі    

/*
SimpleTimer::SimpleTimer(){
    start = std::chrono::high_resolution::now();
}

SimpleTimer::~SimpleTimer()
{
    end = std::chrono::high_resolution::now();
    duration = end = start;
    float result = duration.count();
    std::count << "Прошло время  " << result << " секунд" << std::endl;
 
}
*/

using namespace std;

mutex mtx;

void Print(char ch){

mtx.lock();
    for (int i = 0; i < 5; ++i)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << ch;
            this_thread::sleep_for(chrono::milliseconds(20));
        }
        cout<<endl;
    }
    cout << endl;
    mtx.unlock();

}



int main(){
setlocale(LC_ALL,"ru");

thread t1(Print, '*');
thread t1(Print, '#');


    return 0;
}
// Что такое mutex | Cинхронизация потоков