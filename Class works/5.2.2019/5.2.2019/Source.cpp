/*Шаблунні функції 
#include<iostream>
using namespace std;
template<typename T1,typename T2>
T1 sum(T1 a, T2 b) {
	return a + b;
}
/*template<typename T1, typename T2>
void Demo(T1 a, T2 b) {
	cout << a << endl;
	cout << b << endl;
}
int main()
{
	cout << sum(5.3, 8) << endl;
	//cout << sum(2.8, 2.4) << endl;
	//Demo(8, 10);
	//Demo(2.3, 6.7);
	//Demo("TEST", "WORLD");
	//Demo(88, "wor");
	system("pause");
	return 0;
}*/

//---------------------------------TASK 1 -------------------------
/*функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
шаблонну функцію Print(), яка виводить елементи масиву на екран.Примітка!Протестувати дану функцію на масивах типу int, double, char
функцію, яка повертає кількість відємних елементів масиву
перевантажені функції :
-для знаходження середнього арифметичного елементів масиву
*/

/*#include<iostream>
#include<ctime>
using namespace std;

template<typename T>
void FillArr(T arr[], const int SIZE);
template<typename T>
void Find(T arr[], const int SIZE);
template<typename T>
void Print(T arr[], const int SIZE);

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE];
	
	FillArr(arr, SIZE);
	Print(arr, SIZE);
	Find(arr, SIZE);
	system("pause");
	return 0;
}
template<typename T>
void FillArr(T arr[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 50 - 20;
	}
}
template<typename T>
void Print(T arr[], const int SIZE) {
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << " arr [ " << i << " ] = " << arr[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}
template<typename T>
void Find(T arr[], const int SIZE) {
	double average = 0;
	for (int i = 0; i < SIZE; i++) {
		average += arr[i];
	}
	cout << "THE arithmetic average is = " << average / SIZE << endl;
}
*/



//-------------------------TASK 2-------------------------------- 
/*Написати перевантажені функції й основну програму, що їх викликає
для масиву який починається на парне число виконує циклічне зрушення вліво на кількість елементів рівному першому елементові масиву.
для масиву який починається на непарне число виконує циклічне зрушення вправо на кількість елементів рівне останньому елементові масиву.
*/
#include<iostream>
#include<ctime>

using namespace std;

template<typename T>
void FillArr(T arr[], const int SIZE);


template<typename T>
void Print(T arr[], const int SIZE);


template<typename T>
void FillArr(T arr1[], const int SIZE);


template<typename T>
void Print(T arr1[], const int SIZE);




int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE];
	int arr1[SIZE];

	FillArr(arr, SIZE);
	FillArr(arr1, SIZE);
	Print(arr, SIZE);
	Print(arr1, SIZE);
	
	system("pause");
	return 0;
}
template<typename T>
void FillArr(T arr[], const int SIZE)
{
		int tmp = 0;
		for (int i = 0; i < SIZE; i++)
		{
			tmp = rand() % 30 + -20;
			if (tmp %2 == 0) {
				arr[i] = tmp;
			}
			else {
				i--;
			}
		}
}

	


template<typename T>
void Print(T arr1[], const int SIZE) {

	for (int i = 0; i < SIZE; i++)
	{
		cout << " arr [ " << i << " ] = " << arr1[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}
