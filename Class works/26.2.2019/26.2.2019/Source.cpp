//#include<iostream>
//using namespace std;
//int main()
//{
//	int *p = new int ;
//	*p = 10;
//	cout << "*p = " << *p << endl;
//	cout << "p = " << p << endl;
//	delete p;
//	cout << "p = " << p << endl;
//	system("pause");
//	return 0;
//}

/*Перевірити роботу функції для того, щоб обернути масив.
  37.	Написати функції:
- Заповнення масиву; 
- Виводу одновимірного масиву на екран (функція отримує вказівник на перший елемент масиву); 
- Виводу елементів масиву, які стоять на парних місцях, на екран (функція отримує вказівник на третій!!! елемент масиву);*/

/*#include<iostream>
#include<ctime>

using namespace std;
void FillArr(int arr[], const int size);
void PrintArr(int arr[], const int size);
void PrintParni(int arr[], const int size);
void PrintParniPlace(int arr[], const int size);
void Element3(int arr[], const int size);
int main()
{
	srand(unsigned(time(NULL)));
	const int size = 20;
	int arr[size];
	//int &elem = arr[2];

	FillArr(arr, size);
	PrintArr(arr, size);
	PrintParni(arr, size);
	PrintParniPlace(arr, size);
	Element3(arr+2, size);
	system("pause");
	return 0;
}

void FillArr(int arr[], const int size)
{	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArr(int arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	cout << "------------------------------------------->" << endl;
}

void PrintParni(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if ((arr[i] % 2) == 0)
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
	cout << "------------------------------------------->" << endl;
}

void PrintParniPlace(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		if ((i % 2 == 0))
		{
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
	}
	cout << "------------------------------------------->" << endl;
}

void Element3(int arr[] , const int size)
{
	cout << "Element 3" << endl;
	for (int i = 2; i < size; i++)
	{
		if (i <= 17) {
			cout << "arr[" << i << "] = " << arr[i] << endl;
		}
		else if (i == 18) {
			cout << "arr[" << "0" << "] = " << arr[0] << endl;
		}
		else if (i == 19) {
			cout << "arr[" << "1" << "] = " << arr[1] << endl;
		}
	}
	cout << "------------------------------------------->" << endl;
}*/

//-----------------------------------------TASK ---------------------------------------
/*Написати шаблонні функції для роботи з двовимірними масивами різних типів.
-Заповнення масиву(з використанням  &)
- Вивід масиву на екран(з використанням  &)
- Вивід всіх елементів на головній діагоналі на екран
- Знаходження найбільшого елемента масиву
- Перестановка рядків масиву
- Очищення масиву(Заповненя нулями)
Задачу робити з Меню.Вихід з меню по 0*/

#include<iostream>
#include<ctime>

using namespace std;
const int row = 5;
const int line = 5;
int arr[row][line];

template<typename T>
void FillArr(T arr[], const int row, const int line);

template<typename T>
void Print(T arr[], const int row, const int line);

template<typename T>
void Print1(T arr[], const int row, const int line);

void FuncMenu(int Menu);

template<typename T>
void Biggest(T arr[], const int row, const int line);



int main()
{
	srand(unsigned(time(NULL)));
	int Menu = 0;

	cout << "Print matrix on Screen : 1" << endl;
	cout << "Print all Elements on the main part of Screen : 2" << endl;
	cout << "Find the Biggest Number of the Matrix : 3 " << endl;
	cout << "Chnage the look of Printing : 4 " << endl;
	cout << "Fill the Matrix by zeros : 5 " << endl;
	cout << "----------------------------------->" << endl;

	FuncMenu(Menu);


	system("pause");
	return 0;
}

template<typename T>
void FillArr(T arr[], const int row, const int line) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < line; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

template<typename T>
void Print(T arr[], const int row, const int line) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++) {
			cout << "arr[" << i << "][" << j << "]= " << arr[i][j] << endl;
		}
		cout << "----------------------------------->" << endl;
	}
	cout << "----------------------------------->" << endl;
}

template<typename T>
void Print1(T arr[], const int row, const int line) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++) {
			cout << "\t\t\tarr[" << i << "][" << j << "]= " << arr[i][j] << endl;
		}
	}
}

template<typename T>
void Biggest(T arr[], const int row, const int line)
{
	int Big = arr[0][0];
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++)
		{
			if (arr[i][j] > Big)
				Big = arr[i][j];
		}
	}
	cout << "The Biggest Number is : " << Big << endl;
}



void FuncMenu(int Menu)
{
	cout << "Enter your Number of Operation you want : " << endl;
	cin >> Menu;
	if (Menu ==  1)
	{
		FillArr(arr, row, line);
		Print(arr, row, line);
		FuncMenu(Menu);
	}
	else if (Menu == 2)
	{
		FillArr(arr, row, line);
		Print1(arr, row, line);
		FuncMenu(Menu);
	}
	else if (Menu == 3)
	{
		FillArr(arr, row, line);
		Print(arr, row, line);
		Biggest(arr, row, line);
		FuncMenu(Menu);
	}
	else if (Menu == 4)
	{
		FillArr(arr, row, line);
		Print1(arr, row, line);
		FuncMenu(Menu);
	}
	else if (Menu == 5)
	{
		arr[row][line] = {};
		Print(arr, row, line);
		FuncMenu(Menu);
	}
	else
	{
		cout << "Enter only the Numbers that are shown above !! " << endl;
		FuncMenu( Menu);
	}
}
