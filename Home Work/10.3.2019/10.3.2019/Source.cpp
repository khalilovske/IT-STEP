#include<iostream>
#include<ctime>

using namespace std;

template < typename T1, typename T2, typename T3>
void FillArray(T1 arr[], T2 Size, T3 number) {
	for (int i = 0; i < Size; i++)
	{
		arr[i] = rand() % 10;
	}
}

template < typename T1, typename T2, typename T3>
void PrintArray(T1 arr[], T2 Size, T3 number) {
	for (int i = 0; i < Size; i++)
	{
		cout << "\n\tArray: " << arr[i] << " . " << "\tAddres of array: " << arr + i << " . " << endl;
	}
}

template < typename T1, typename T2, typename T3>
void NewNumber(T1 arr[], T2 Size, T3 number) {

	int *newArray = new int[Size + 1];

	cout << "\n\tEnter number which you want to add in array: ";

	cin >> number;

	for (int i = 0; i < Size; i++)
	{
		newArray[i] = arr[i];
	}

	newArray[Size] = number;

	delete[] arr;

	arr = newArray;

	PrintArray(arr, Size + 1, number);
}

template < typename T1, typename T2, typename T3, typename T4>
void DeleteNumber(T1 arr[], T2 *Size, T3 number, T4 deleted) {

	int *newArray = new int[*Size - 1];

	cout << "\n\tEnter number which you want to delete in array: ";

	cin >> deleted;

	int iter = 0;
	for (int i = 0; i < *Size; i++)
	{
		if (i == deleted) iter--;
		else newArray[iter] = arr[i];
	}

	*Size -= 1;

	delete[] arr;

	arr = newArray;

	PrintArray(arr, *Size, number);
}

int main() {

	srand(unsigned(time(NULL)));

	int Size = 10;
	int number = 0;
	int deleted = 0;

	int *arr = new int[Size];

	cout << "\n\tEnter the size of array: ";
	cin >> Size;

	FillArray(arr, Size, number);
	PrintArray(arr, Size, number);
	NewNumber(arr, Size, number);
	//DeleteNumber(arr, Size, number, deleted);

	cout << endl;

	system("pause");
	return 0;
}