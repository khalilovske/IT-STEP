#include<iostream>
#include<ctime>
using namespace std;


void FillArr(int arr[], const int size);
void PrintArr(int arr[], const int size);


int main()
{
	const int size = 5;
	int arr[size];

	FillArr(arr, size);
	PrintArr(arr, size);


	system("pause");
	return 0;


}


void FillArr(int arr[], const int size)
{
	srand(unsigned(time(NULL)));
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 41 - 20;
	}
}

void PrintArr(int arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}