#include<iostream>
#include<thread>

using namespace std;

void DoWork(int &a){
    this_thread::sleep_for(chrono::milliseconds(2000));
cout << "===============================\tDoWork Started\t=========================="<< endl;
 
    this_thread::sleep_for(chrono::milliseconds(5000));

    a = a *2;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "id потока"<< this_thread::get_id()<< "===============================\tDoWork Stoped\t=========================="<< endl;
}

int Sum(int a, int b){
  this_thread::sleep_for(chrono::milliseconds(2000));

cout << "===============================\tSum Started\t=========================="<< endl;
 
    this_thread::sleep_for(chrono::milliseconds(5000));

    a = a *2;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "id потока"<< this_thread::get_id()<< "===============================\tSum Stoped\t=========================="<< endl;

    return a +b;
}

int main(){
setlocale(LC_ALL, "ru");

/*int q;
thread t(DoWork,std::ref(q));  // ref(ссилка)  для компіляції програми


for (size_t i = 0; i < 10; i++)
{
    cout << "Id потока  =  " << this_thread::get_id() << "\tmain works\t" << i << endl;
this_thread::sleep_for(chrono::milliseconds(500));
}

t.join(); // чекаэ виконання всых потокыв
cout << q <<endl;*/



//// Лямбда выражения и возврат результата выполнения потока
int result;
thread t([&result](){result = Sum(2, 5);});  // ref(ссилка)  для компіляції програми


for (size_t i = 0; i < 10; i++)
{
    cout << "Id потока  =  " << this_thread::get_id() << "\tmain works\t" << i << endl;
this_thread::sleep_for(chrono::milliseconds(500));
}

t.join(); // чекаэ виконання всых потокыв
cout << "Sum Result = "<< result << endl;

    return 0;
}
//// Лямбда выражения и возврат результата выполнения потока