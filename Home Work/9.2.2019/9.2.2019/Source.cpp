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
void SortLine(T arr[], const int line);


template<typename T>
void SortRow(T arr[], const int row);


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

	SortLine(arr, line);
	SortLine(arr, row);

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
void SortLine(T arr[], const int line)
{
	for (int i = line ; i >= 1 ; i--) {
		int j = 0;
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
	}
}

template<typename T>
void SortRow(T arr[], const int row) {
	for (int i = row; i >= 1; i--) {

		if (arr[i] > arr[i + 1]) {
			int tmp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = tmp;
		}
	}

}
