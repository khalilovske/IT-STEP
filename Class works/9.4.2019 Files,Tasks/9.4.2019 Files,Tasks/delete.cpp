#include<iostream>
#include<ctime>
#include"Arrays.h"


void Delete(int *arr[], int  size) {
	int Number = 0;
	cout << "Enter the Number of Array you want to be deleted :" << endl;
	cin >> Number;

	cout << "-------------------------------------" << endl;
	for (int i = 0; i < size ; i++) {
		if (i == Number) {
			delete[]*(arr +i);
		}
	}

	delete[]arr;
}