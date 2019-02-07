/*1. Написати шаблони функцій для роботи з двовимірним масивом:
a.	введення(або заповнення випадковими числами) двовимірного масиву
b.	виведення матриці на екран
c.	перевірка чи всі(кожен) рядки матриці впорядковані за зростанням(шаблон функції повертає логічне значення).
d.	перевірка чи заданий стовпець матриці впорядкований за спаданням

Перевірити роботу шаблонів функцій
*/

#include<iostream>
#include<ctime>

using namespace std;


template<typename T>
void FillArr(T arr[], const int row, const int line);

template<typename T>
void SortBuble(T arr[], const int row, const int line);




template<typename T>
void Print(T arr[], const int row, const int line);

int main()
{
	srand(unsigned(time(NULL)));
	const int row = 3;
	const int line = 3;
	int arr[row][line];

	FillArr(arr, row, line);
	Print(arr, row, line);
	SortBuble(arr, row, line);
	Print(arr, row, line);
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

			cout <<"arr[" << i <<"][" << j << "]= " << arr[i][j] << endl;
			
		}
	}
	cout << "----------------------------------->" << endl;
}

template<typename T>
void SortBuble(T arr[], const int row, const int line) {
	for (int i = row - 1 ; i >= 1 ; i--) {
		for (int j = line ; j < i ; j++) {
			if (arr[j] > arr[j + 1]) {
				double tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}