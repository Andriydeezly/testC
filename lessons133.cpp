#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include <fstream>
#include <memory> // бібліотека умних указателів
using namespace std;

template <typename T>
class List
{
public:
    List();
    ~List();
    void clear();  //метод очистки всых елементыв списку
    void pop_front();
void push_back(T data);

int GetSize(){
    return size;
}

T& operator[](const int index);
private:
    template <typename T>
    class Node
    {
    public:
        Node *pNext;
        T data;

        Node(T data = T(), Node *pNext = nullptr)
        {

            this->data = data;
            this->pNext = pNext;
        }
    };

int size; // рахує кількість елементів в списку
    Node<T> *haed;
};

template<typename T>
List<T>::List(){
size = 0;
haed = nullptr; // перший елемент
}
template<typename T>
List<T>::~List(){
}

template<typename T>
void List<T>::pop_front(){
    Node<T> *temp=head;
head = head->pNext;
delete temp;
Size--;
}

template<typename T>
void List<T>::push_back(T data){ 
    if (head == nullptr){         // добавляэмо нульовий елемент 
        haed = new Node<T>(data)
    }
    else{   // якшо не нульовий елемент
Node<T> *curent = this->haed;

while (current->pNext !=nullptr)
{
    curent = curent->pNext;
}
curent->pNext =nullptr;
    }
    size ++;
}

template<typename T>
void List<T>::clear(){

    while (size)        // поки size > 0 тоды визиваэться метод
    {
        pop_front();
    }
}

template<typename T>
T& List<T>::operator[](const int index){
int counter = 0;
    Node<T> *curent = this->haed; // в якому конкретному ми елементі
while (curent!=nullptr)
{
    if(counter==index){
        return curent->data;
    }
    curent = curent->pNext;
    counter++; // перейшли на слыдующий елемент
}


}

int main()
{
    setlocale(LC_ALL, "ru");

    List<int> lst;

int numberList;  // кількість елементів в списку
cin>>numberList;
for (int i = 0; i < numberList; i++)  //формуєм елементи масиву
{
    lst.push_back(rand()%10);
}


for (int i=0; i<numberList;i++){  // виводим список 
    cout <<lst[i]<<endl;
}

cout << endl<<"Элементов в списке"<<lst.GetSize()<<endl<<"Виводим метод pop_front"<<endl<<endl;
lst.pop_front();

for (int i=0; i<numberList;i++){  // виводим список 
    cout <<lst[i]<<endl;
}

cout<<endl<<"Элементов в списке"<<lst.GetSize()<<endl;

}