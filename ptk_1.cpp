#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void DoWork(){

   for(size_t i=0; i<10; i++){
cout << "Id потока  =  " << this_thread::get_id() << "\tDoWork" << i << endl;
this_thread::sleep_for(chrono::milliseconds(500));
} 
}


int main()
{
    setlocale(LC_ALL, "ru");


    cout << " Start Main" << endl;

    this_thread::sleep_for(chrono::milliseconds(3000)); // задержуэ виконання методу на час

cout  << this_thread::get_id() << endl; // получаэм номер потоку
   
   cout << "End Main"<< endl;
    
    cout <<  "==========================================================================="<<endl<<endl;
thread th (DoWork); // створюєм новиий поток 
th.detach(); // розрив потоків поки виконнується основний

    for (size_t i= 0; i< 10; i++){
cout << "Id потока  =  " << this_thread::get_id() << "\tmain" << endl;
this_thread::sleep_for(chrono::milliseconds(5000)); 
    }
    return 0;
}

// Многопоточность | Потоки | thread | Многопоточное программирование