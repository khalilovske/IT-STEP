#include <iostream>
#include <ctime>
#include <string>

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

bool Bigger(int a, int b) {
	if (a > b) {
		return true;
	}
	else {
		return false;
	}
}

bool Smaller(int a, int b) {
	if (a > b) {
		return false;
	}
	else {
		return true;
	}
}

void SortArr(int *arr, const int SIZE, bool(*f)(int a, int b)) {
	int a = 110, b = 19;
	if (f(a, b) == 1) {
		cout << "Sort upper" << endl;
	}
	else {
		cout << "Sort lower" << endl;
	}

}

int main() {

	const int SIZE = 10;
	int arr[SIZE];

	Fill(arr, SIZE);
	Print(arr, SIZE);
	SortArr(arr, SIZE, Bigger);
	SortArr(arr, SIZE, Smaller);


	system("pause");
	return 0;
}