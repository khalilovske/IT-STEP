//1) Написати функції для роботи з динамічним одновимірним масивом :
//a) Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами в діапазоні[-12..56].Функція повертає адресу створеного масиву.
//b) Виводу масиву
//c) Доповнення масиву одним елементом.Функція отримує адресу масиву, розмір та елемент для доповнення.

#include<iostream>
#include <ctime>


using namespace std;

void Fill(int *arr, const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 10;
	}
}

void Print(int *arr, const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << "Arr [" << i << "] = " << arr[i] << endl;
	}
}

int main()
{
	srand(unsigned(time(NULL)));

	int SIZE ;
	int *arr = new int [SIZE];
	cout << "Enter your Array's size : " << endl;
	cin >> SIZE;

	Fill(arr, SIZE);
	Print(arr, SIZE);

	delete[]arr;

	system("pause");
	return 0;
}