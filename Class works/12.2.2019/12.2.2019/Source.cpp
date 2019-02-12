/*#include<iostream>

using namespace std;

int main()
{

	int a = 5;
	int *pointerA =& a;
	int *pointerbackup = pointerA;
	cout << "Value a = " << a << endl;
	cout << "address a = " << &a << endl << "value *pointer a =" << *pointerA << endl << "address  pointer a " << pointerA << endl;
	*pointerA = 100500;
	cout << "address a = " << &a << endl << "value *pointer a =" << *pointerA << endl << "address  pointer a " << pointerA << endl;
	system("pause");
	return 0;
}
*/

//------------------------------- POINTERS ------------------------------
/*# include <iostream>

using namespace std;

int main() {




	/*int a = 5, b = 10;

	cout << "a = " << a << " Address = " << &a << endl;
	cout << "b = " << b << " Address = " << &b << endl;

	int *pointerA;
	pointerA = &a;

	cout << "Address a = " << &a << " pointerA = " << pointerA << endl;
	cout << "Value a = " << a << " Value pointerA = " << *pointerA << endl;

	*pointerA = 100500;
	cout << "Value a = " << a << " Value pointerA = " << *pointerA << endl;

	int *pointerBackup = &a;
	cout << "Address a = " << &a << " pointerBackup = " << pointerBackup << endl;
	cout << "Value a = " << a << " pointerBackup = " << *pointerBackup << endl;*/


	/*const int SIZE = 5;
	int arr[SIZE] = { 3,7,9,1,5 };

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}
	cout << "arr = " << arr << endl;

	int *pointerArr = arr;
	for (int i = 0; i < SIZE; i++) {
		cout << pointerArr[i] << endl;
	}
	cout << "arr = " << arr << " pointerArr = " << pointerArr << endl;

	cout << "Second element pointer " << *(arr + 1) << endl;
	cout << "Second element  default " << arr[1] << endl;


	//==============Адреси елементів масиву
	for (int i = 0; i < SIZE; i++) {
		cout << "arr[ " << i << "] = " << (arr + i) << endl;
	}
	*/








//	system("pause");
//	return 0;}
//

//Дано три числа. Оголосити вказівники на ці числа. Отримати добуток трьох заданих чисел, 
//середє арифметичне, найменше з них, користуючись непрямим доступом до чисел (через вказівники). 

/*#include <iostream>

using namespace std;
int main()
{
	
	int a = 5, b = 3, c = 6;
	float sum = 0;
	int *Pointera = &a;
	int *Pointerb = &b; 
	int *Pointerc = &c;

	sum = *Pointera + *Pointerb + *Pointerc;
	
	cout << "Sum = " << sum  << endl;
	cout << "arithmitic = " << sum /3   << endl;

	if (*Pointera > *Pointerb && *Pointera > *Pointerc)
	{
		cout << "The Biggest Number is : " << *Pointera << endl;
	}
	if (*Pointerb > *Pointera && *Pointerb > *Pointerc)
	{
		cout << "The Biggest Number is : " << *Pointerb << endl;
	}
	if (*Pointerc > *Pointerb && *Pointerc > *Pointera)
	{
		cout << "The Biggest Number is : " << *Pointerc << endl;
	}

	system("pause");
	return 0;
};*/

//-------------------------------- Exam ----------------
#include <iostream>
#include<ctime>
using namespace std;


template<typename T>
void FillArr(T arr[], const int subject, const int mark);

template<typename T>
void Print(T arr[], const int subject, const int mark);

template<typename T>
int arithmetic(T arr[], const int subject, const int mark);


int main()
{

	srand(unsigned(time(NULL)));
	const int subject = 5;
	const int mark = 5;
	int arr[subject][mark];

	FillArr(arr, subject, mark);
	Print(arr, subject, mark);
	arithmetic(arr, subject, mark);

	system("pause");
	return 0;
}

template<typename T>
void FillArr(T arr[], const int subject, const int mark){
	for (int i = 0; i < subject;i++){
		for (int j = 0; j < mark;j++){
			arr[i][j] = rand() % 100;
		}
	}
}


template<typename T>
void Print(T arr[], const int subject, const int mark) {
	for (int i = 0; i < subject; i++) {
		{
			for (int j = 0; j < mark; j++) {

				cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << endl;

			}
		}
		cout << "----------------------------------->" << endl;
	}
}


template<typename T>
int arithmetic(T arr[], const int subject, const int mark)
{
	float sum = 0;
	for (int i = 0; i < subject;i++) 
	{
		for (int j = 0; j < mark; j++)
		{
			sum += arr[i][j];
		}
		cout << " The Sum for the Participant Nmuber " << i << " is " << sum / 5 << endl;
		sum = 0;
	}
	return 0;
}