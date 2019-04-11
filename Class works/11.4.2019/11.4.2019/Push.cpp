#include "Header1.h"
#include<iostream>
#include<ctime>
#include"Header.h"

using namespace std;



void Push(int *&arr, int size) {
	int elem = 0;
	cout << "Enter new element " << endl;
	cin >> elem;

	int *tmpArr = (int *)malloc((size+1) * sizeof(int));
		
	cout << " The new element " << elem << endl;

	for (int i = 0; i < size; i++) {
		tmpArr[i] = arr[i];
	}
	tmpArr[size] = elem;
	delete[]arr;
	arr = tmpArr;
	cout << "===========================" << endl;

}