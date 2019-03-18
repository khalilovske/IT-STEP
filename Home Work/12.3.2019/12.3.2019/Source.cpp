/*Написати програму  в якій дано  динамічний одновимірний масив даних  розмірністю 20 елементів заповненого випадковими числами
в діапазоні[-12..56]:
Після кожного відємного елемента вставити його модуль
Видалити всі парні елементи масиву*/


#include<iostream>
#include<ctime>

using namespace std;

int counter = 0;

void Fill(int *const arr, int const size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30 +- 12 ;
	}
}

void Print(int *const arr, int  size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "==================================>" << endl;
}

void Module(int *const arr, int const size) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			cout << (((arr[i]) * (-1))) << "\t";
			cout << "*" << (((arr[i]) * (arr[i]))) << endl;
		}
	}
	cout << "==================================>" << endl;

}

void Delete(int *const arr, int const size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			delete[]arr;
			counter++;
		}
	}
	cout << "==================================>" << endl;
}

int main()
{
	srand(unsigned(time(NULL)));

	int size ;
	cout << "Enter your Array's size : " << endl;
	cin >> size;
	cout << "==================================>" << endl;

	int *arr = new int[size];

	Fill(arr, size);
	Print(arr, size);
	Module( arr, size);
	Print(arr, size - counter);

	delete[]arr;

	system("pause");
	return 0;
}


