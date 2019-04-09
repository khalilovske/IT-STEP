#include<iostream>
#include<ctime>
#include"Arrays.h"

using namespace std;

void Push(int *&arr, int size) {
	int elem = 0;
	cout << "Enter new element " << endl;
	cin >> elem;
	int *tmpArr = new int[size + 1];
	cout << "rmpArr address = " << tmpArr << endl;
	for (int i = 0; i < size; i++) {
		tmpArr[i] = arr[i];
	}
	tmpArr[size] = elem;

	delete[]arr;
	arr = tmpArr;
}