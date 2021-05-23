#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>

using namespace std;

int main(){
setlocale(LC_ALL,"ru");

    stack<int,list<int>> st;
    st.push(24);
    st.push(547);
    st.push(980);
    st.push(456);
    st.emplace(32);

    while (st.empty())
    {
        cout <<st.top() <<endl; //// спочатку перебираєм всі елементи
        st.pop();               //// потім виводим значення
    }
    
    //auto l = st._Get_container();  // вихиває базовий контейнер
    
 return 0;   
}
//// Stack | Адаптеры контейнеров | Библиотека стандартных шаблонов (stl) 