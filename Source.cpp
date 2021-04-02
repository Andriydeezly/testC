#include <iostream>
#include <cmath>
#include<cstring>
#include<ctime>
using namespace std;
//guigiurgdgrddaawfwafwgit 
	/*template<typename T>
void SWAP(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}*/

	/*int  StrLeg(char* str) {
	int counter = 0;
	while (str[counter]!='\0')
	{
		counter++; 
	}
	return counter;
}*/

	/*void PuhArray(int* const arr,const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}*/

	/*void ShowArray(int* const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << '\t';
	}
	cout << endl;
}*/

class Point	
{
private:
	int x;
	int y;

public:
	Point() {
		x= 0;
		y= 0;
		cout << "����������� ��������\t " << this << endl;

	}
	Point(int valueX, int valueY) {
		x = valueX;
		y = valueY;
		cout << "����������� ��������\t " << this << endl;
	}
	bool operator = (const Point& other) {
		return this->x == other.x && this->y == other.y;
	}
	bool operator != (const Point& other) {
		return !(this->x == other.x && this->y == other.y);
	}

	Point operator+ (const Point& other) {
		Point temp;
		temp.x = this->x + other.x;
		temp.y = this->y + other.y;

		return temp;
	}
};

	/*void Foooo(MyClass value ) {
	cout << "������� ��� Fooo" << endl;
}*/



int  main() {
	setlocale(LC_ALL, "Russian");
	/*char choise;
	cout << "spravka po:\n";
	cout << "1. if \n";
	cout << "2. switch\n";
	cout << "vuberete odun ith  ";
	cin >> choise;

	cout << "\n";

	switch (choise)
	{
	case '1':
		cout << "predlogenue If:  \n\n";
		cout << "If (uslovia) ......  \n";
		cout << "else ...... \n";
			break;
		case '2':
				cout << "predogenua switch  \n\n";
				cout << "case ....... \n";
				cout << "brake .... \n";
				cout << "defaut .....";
				break;
	default:
		cout << "predlogenua otsustoca  ";
	}*/

	/*int num;
	double koren;

	for (num = 1; num < 100; num++) {
		koren = sqrt(num);
		cout << num << "  " << koren; '\n';
	}*/

	/*int i;
	//int r;
	//r = rand();
	//for ( i = 0; r < 100; i++)
	//	r = rand();
	//	cout << "randomne chuslo " << r << "  na kroci " << i;
	//	return 0;
	*/

	/*int len;
	cout << "vedite dlunu do 79\n";
	cin >> len;
	while (len>0 && len<80 ){
		cout << '.';
		len++;
	}*/

	/*int i;
	do {
		cout << "vedit chuslo 100";
		cin >> i;
	} while ( i !=100);*/

	/*int magic;
	int	geuss;
	magic = rand();
	do {
		cout << "vvedite dogadku chuslo";
		cin >> geuss;
		if (geuss == magic) {
			cout << "***Bingo***";
			cout << "vgadaln chuslo \n";
		}
		else {
			cout << "sorry you wrong";
			if (geuss>  magic)
				cout << "chuslo bilshe \n";
			else
				cout << "chuslo menche \n";
		}

	} while (geuss != magic);
	return 0;*/

	/*int mas[10];
	int i;
	for (i = 0; i < 10; ++i) mas[i] = i;
	for (i = 0; i < 10; ++i)
		cout << " eto mas[" <<i<<"]: "<<mas[i]<<";\n";
	return 0;*/

	/*int nums[10];
	int a, b, t;
	int size;
	size = 10;
	for (t = 0; t < size; t++) nums[t] = rand();
	cout << "ushodnoy masuv:\n  ";
	for (t = 0; t < size; t++) cout << nums[t] << ' ';
	cout << "  \n";
	for (a=1; a<size; a++)
		for (b = size - 1; b >= a; b--) {
			if (nums[b - 1] > nums[b]) {
				t = nums[b - 1];
				nums[b - 1] = nums[b];
				nums[b] = t;
			}
		}
	cout << "\nUporaduch masuv:  \n";
	for (t = 0; t < size; t++)
		cout << nums[t] <<  "  ";*/

	/*  int i;
		char str[50];
		char numbers[10][50] = {
		"���", "555-3322",
		"����","555-8976",
		"����","555-2037",
		"����","555-1098",
		"����","555-4536" };
		cout << "������ ��� ";
		cin >> str;
		for ( i = 0; i < 10; i+=2)
		if(!strcmp(str,numbers[i])){
			cout << "������� " << numbers[i+1] << "\n";
			break;
		}
		if (i == 10) cout << "�� ������� \n";*/

	/*  char str[]="��� �������� ������";
	char *start, *end;
	int len;
	char t;

	cout << "��������  " << str << "\n";
	len = strlen(str);
	start = str;
	end = &str[len-1];

	while (start < end)
	{
		t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}
	cout << "�����������  "<< str <<"\n";*/

	/* char *dictionary[][2] = {
"��������","���������� ���",
"����������","���������� �����",
"�����","�������� �������������",
"�������","��������� �����",
"����","����� �����",
"","" };
char word[80];
int i;

cout << "vvedit slodo  ";
cin >> word;
for ( i = 0; *dictionary[i] [0]; i++){
	if (!strcmp(dictionary[i][0], word)) {
		cout << dictionary[i][1] << "\n";
		break;
	}
}
if (!*dictionary[i][0])
cout << word << "  �� �������. \n"  treba perev*/

	/*char* substr;
substr = get_substr("���","���� ��� ��� ������");
cout << "��������� �������  " << substr;
	return 0;
}

char *get_substr(char *sub, char *str) {
	int t;
	char *p, *p2, *start;
	for (t = 0; str[t]; t++) {
		p = &str[t];
		start = p;
		p2 = sub;
		while(*p2 && *p2 ==*p ){
			p++;
			p2++;
		}
		if (!*p2)
			return start;
	}
	return 0;*/

	/*char str1[80] = "��� ��������";
char str2[80] = "1234563";
strcpy(str1, "��� ��������");
mystrcat(str1,str2,5);
cout << str1<< "\n";

return 0;
}

void mystrcat(char* s1, char* s2, int len){
	while (*s1) s1++;
if (len == 0) len = strlen(s2);

while (*s2 && len) {
	*s1 = *s2;
	s1++;
	s2++;
	len--;
}
*s1 = '\0';
}*/

	/*int num;
do {
	cout << "���������� �����";
		cin >> num;
		if (num != -1)
			cout<< "������ �����  "<<running_avg(num)<<"\n";
} while (num > -1);
return 0;
}

int running_avg(int i) {
	static int sum = 0, count = 0;
	sum = sum + i;
	count++;
	return sum / count;*/

	/*char ch;
for (int i = 0; i < 10; i++) {
	ch = 'A' + i;
	cout << ch;
}
	ch = ch | 32;
	cout << ch << "  ";
	cout << "\n";
	return 0;*/

	/*char msg[] = "This is a test";
char key = 88;
cout << "���� ������ ��������� " << "\n";
for (int i = 0; i < strlen(msg); i++)
	msg[i] = msg[i] ^ key;

cout << "������������ �����  " << msg << "\n";
for (int i = 0; i < strlen(msg); i++)
	msg[i] = msg[i] ^ key;
cout << "������������ ������������   " << msg << "\n";
return 0;*/

	/*char ch = 'T';
cout << "�������� �������� � ��� ����:  \n";
for (int i = 0; i < 8; i++){
	ch = rrotate(ch, 1);
	binary(ch);}
return 0;
}

unsigned char lrotate(unsigned char val, int n) {
	unsigned int t;
	t = val;
	t = t << 8;
	for (int i = 0; i < n; i++)
	{
		t = t >> 1;
		if (t & 128)
			t = t | 32768;}
	t = t >> 8;
	return t;
}

void binary(unsigned int u) {
	int t;
	for (t = 128; t > 0; t = t / 2)
		if (u & t) cout << "1";
		else cout << "0";
	cout << " \n";*/

	/*Queue bigQ(100);
	Queue smallQ(4);
	char ch;
	int i;

	cout << "���������� bigQ ��� �������� ���������� ��������. \n";
	for (i = 0; i < 26; i++) 
	    bigQ.put('A' + i);
	
	cout << "������� �� ����� �������� bigQ. \n";
	for (i = 0; i < 26; i++) {
		ch =bigQ.get();
		if (ch != 0) cout << ch;}
	cout << "\n\n";

	cout << "���������� smallQ ��� ����������� ������. \n";
		for (i = 0; i < 5; i++) {
			cout << "�������� ��������" << 
				(char)('Z' - i);
			smallQ.put('Z' - i);
			cout << "\n";
		}
			cout << "\n";

			cout << "sodergumoye  smallQ";
			for ( i = 0; i < 5; i++){
				ch = smallQ.get();
				if (ch != 0) cout << ch;
			}*/

	/*const int Size = 10;
srand(time(NULL));
int arr[Size];
bool Treen;

for (int i = 0; i < Size;) {
	Treen = false;
	int newValue = rand() % 20;
	for (int j = 0; j < i; j++) {
		if (arr[j] == newValue) {
			Treen = true;
			break;
		}
	}
	if (!Treen) {
		arr[i] = newValue;
		i++;
	}
	}

int minValue = arr[0];
for  (int i = 1; i < Size; i++){
	if (minValue < arr[i]) {
	
	}

}
cout << "naymenshe chuslo =  " << minValue << endl;*/

	/*srand(time(NULL));
const int SIZE= 10;
int arr[SIZE];

bool VarThis;

for (int i = 0; i < SIZE;) {
	VarThis = false;
	int newRandomValue = rand() % 20;

	for (int j = 0; j < i; j++)
	{
		if (arr[j] == newRandomValue)
		{
			VarThis = true;
			break;
		}
	}
	if (!VarThis)
	{
		arr[i] = newRandomValue;
		i++;
	}
	
}

for (int i = 0; i < SIZE; i++)
{
	cout << arr[i] << endl;
}*/

	/*int var1 = 22;
int var2 = 42;

cout << "var1=\t " << var1 << endl;
cout << "var2=\t " << var2 << endl;

SWAP(var1, var2);

cout << "SWAP  " << endl<<endl;
cout << " var1=\t " << var1 << endl;
cout << "var2=\t " << var2 << endl;*/

	/*char* str = "Helllo";
cout << StrLeg(str) << endl;
*/

	/*int size = 10;
int* firstArr = new int[size];
int* secondArr = new int[size];

PuhArray(firstArr, size);
PuhArray(secondArr,size);
cout << "firstArr=\t";
ShowArray(firstArr,size);
cout << "secondArr=\t";
ShowArray(secondArr, size);
delete[] firstArr;
firstArr = new int[size];
for (int i = 0; i < size; i++)
{
	firstArr[i] = secondArr[i];
}

cout << "===========================================================================================" << endl;

cout << "firstArr=\t";
ShowArray(firstArr, size);
cout << "secondArr=\t";
ShowArray(secondArr, size);*/
	Point a(1,5);
	Point b(4,6);
	Point c = a + b;
return 0;
}




