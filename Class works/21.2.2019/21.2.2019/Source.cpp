/*Дано два масива : .Утворити третій масив мінімального можливого розміру, у якому зібрати :
Елементи обох масивів;
Спільні элементи обох массивов;
Елементи масиву A, які не зустрічаються у B;
Елементи масиву В, які не зустрічаються у А;
Елементи масивів A і B, які не є спільними для них(тобто об’єднання результатів двох попереднії результатів).
*/


/*int *p= new int;
	cout << "*p=" << *p << endl;
	cout<<"p=" << p << endl;
	*/
//#include<iostream>
//#include<ctime>
//using namespace std;
//
//template<typename T>
//void FillArr(T arr[], const int SIZE);
//
//
//template<typename T>
//void Print(T arr[], const int SIZE);
//
//
//template<typename T>
//void Mix(T arr[], T arr1[], T Arr[], const int SIZE, const int size);
//
//
//
//int main()
//{
//	srand(unsigned(time(NULL)));
//	const int size = 10;
//	const int SIZE = 5;
//
//	int arr[SIZE];
//	int arr1[SIZE];
//	int Arr[size];
//
//
//	FillArr(arr, SIZE);
//	FillArr(arr1, SIZE);
//	Print(arr, SIZE);
//	Print(arr1, SIZE);
//    Mix( arr,arr1,Arr,SIZE,size);
//	Print( Arr, size);
//
//
//	system("pause");
//	return 0;
//}
//
//template<typename T>
//void Print(T arr[], const int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << " arr [ " << i << " ] = " << arr[i] << endl;
//	}
//	cout << "----------------------------------->" << endl;
//}
//
//template<typename T>
//void FillArr(T arr[], const int SIZE)
//{
//	for (int i = 0; i < SIZE; i++) {
//		arr[i] = rand() % 10 ;
//	}
//}
//
//template<typename T>
//void Mix(T arr[],T arr1[],T Arr[], const int SIZE, const int size)
//{
//	int tmp = 0;
//	for (int i = 0; i < size; i++) {
//		if (i <= 4) {
//			Arr[i] = arr[i];
//		}
//		else {
//			Arr[i] = arr1[tmp];
//			tmp++;
//		}
//	}
//}

//---------------------------------TASK 2 -------------------------------
/*Створити 3 динамічних змінних різного типу.Заповнити їх деякими значеннями.
Обчислити і вивести на екран їх добуток, а також самі значення динамічних змінних*/

//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int *pInt = new int;
//	*pInt = 10;
//	cout << "pInt value = " << *pInt << " pInt address " << pInt << endl;
//
//	float *pFloat = new float;
//	*pFloat = 3.14;
//	cout << "pFloat value = " << *pFloat << " pFloat address " << pFloat << endl;
//
//	double *pDouble = new double;
//	*pDouble = 8.144345;
//	cout << "pDouble value = " << *pDouble << " pDouble address " << pDouble << endl;
//
//	cout << "Result = " << *pInt * *pFloat * *pDouble << endl;
//
//	delete pInt;
//	delete pFloat;
//	delete pDouble;

	/*for (int i = 0; i > -1; i++) {      // Code that kills memory 8)  //
	pointer = new double;
	}*/
//    system("pause");
//	return 0;
//}

//---------------------------------TASK 3 -------------------------------
//Знайти якесь число в масиві і повернути вказівник на нього. Вивести індекс цьго елементу (элемкнт вводиться з клавіатури)

#include<iostream>
#include<ctime>
using namespace std;

template<typename T>
void FillArr(T arr[], const int size);

template<typename T>
void Print(T arr[], const int size);

int main()
{
	srand(unsigned(time(NULL)));
	
	const int size = 5;
	int arr[size];
	int value = 0;
	

	FillArr(arr, size);
	Print(arr, size);
	cout << "Enter the value you want : " << endl;
	cin >> value;

	system("pause");
	return 0;
}

template<typename T>
void Print(T arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " arr [ " << i << " ] = " << arr[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}

template<typename T>
void FillArr(T arr[], const int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 ;
	}
}