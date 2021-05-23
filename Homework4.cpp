#include <iostream>
#include <cmath>
#include <cstring>
#include <ctime>
#include<fstream>
using namespace std;

int Strlg(char *str){
int counter =0;

while (str[counter] != '\0')
{
    counter ++;
}

return counter;
}

int main(){
char *str = "Hellow";

cout << Strlg(str) <<endl;

cout <<"==================================="<< endl;

char arr[] = {'H','e','l','l','o','w','O','G','\0'};

cout <<Strlg(arr)<< endl;
}
//strlen c++ реализация. Посчитать количество символов в строке c++ 