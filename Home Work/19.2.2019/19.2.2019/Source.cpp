//1.Дано цілочисельний одновимірний масив.Заповнити його,
//вивести на екран у прямому та зворотньому порядку та порахувати суму елементів з використанням вказівників.
//2.Дано одновимірний масив.
//Знайти найбільше та найменше значення у масиві та поміняти їх у масиві місцями.Вивести перетворений масив на екран з використанням вказівників.
//3.Дано одновимірний масив.
//Поміняти місцями дві його половини(якщо масив має непарну довжину, то центральний елемент залишається на місці з використанням вказівників
#include<iostream>
#include<ctime>

using namespace std;

template<typename T>
void FillArr(T Arr[], const int size);

template<typename T>
void Print(T Arr[], const int size);

void SortUP(int Arr[], const int size);
void SortDown(int Arr[], const int size);
void Sum(int Arr[], const int size);
void FindSmall(int Arr[], const int size);
void FindBig(int Arr[], const int size);


int main()
{
	srand(unsigned(time(NULL)));
	const int size = 6;
	int Arr[size];

	FillArr(Arr, size);
	Print(Arr, size);
	SortUP(Arr, size);
	SortDown(Arr, size);
	Sum(Arr, size);
	FindSmall(Arr, size);
	FindBig(Arr, size);
	


	system("pause");
	return 0;
}


template<typename T>
void FillArr(T Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 10;
	}
}
template<typename T>
void Print(T Arr[], const int size) {

	for (int i = 0; i < size; i++)
	{
		cout << " Arr [ " << i << " ] = " << Arr[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}



void SortUP(int Arr[], const int size) {
	for (int i = size - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (Arr[j] > Arr[j + 1]) {
				int tmp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = tmp;
			}
		}
	}

	cout << " Sorting from smallest to a bigger element  " << endl;
	for (int i = 0; i < size; i++) {
		cout << "i => " << Arr[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}

void SortDown(int Arr[], const int size) {
	for (int i = size - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (Arr[j] < Arr[j + 1]) {
				int tmp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = tmp;
			}
		}
	}

	cout  << " Sorting from biggest to a smaller element" << endl; 
	for (int i = 0; i < size; i++) {
		cout << "i => " << Arr[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}

void Sum(int Arr[], const int size) {

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += Arr[i];
	}
	cout << "The Summary of the matrix's elements : " << sum << endl;
}

void FindSmall(int Arr[], const int size) {
		int Small = Arr[0];
		for (int i = 0; i < size; i++)
		{
			if (Arr[i] < Small)
				Small = Arr[i];
		}
	cout << "The Smallest Element is : " << Small << endl;
	}

void FindBig(int Arr[], const int size) {
	int Big = Arr[0];
	for (int i = 0; i < size; i++)
	{
		if (Arr[i] > Big)
			Big = Arr[i];
	}
	cout << "The Biggest Element is : " << Big << endl;
}

	