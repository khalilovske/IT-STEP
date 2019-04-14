#include "Header1.h"
#include<iostream>
#include<ctime>
#include"Header.h"

using namespace std;

void Delete(int *&arr, int size)
{
	int number = 0;
	cout << "Enter the number you want to be deleted : " << endl;
	cin >> number;
	cout << "===========================" << endl;

	for (int i = 0; i < size; i++) {
		if (number != arr[i]) {
			cout << arr[i] << endl;
		}
		else;
	}
		
	cout << "===========================" << endl;
}

//#include <iostream>
//#include <ctime>
//
//
//int* del_arr_item_ind(int *&p_arr, unsigned short &size, unsigned short index)
//{
//	size--;
//	int* new_p_arr = nullptr;
//	new_p_arr = (int *)realloc(new_p_arr, size * sizeof(int));
//	unsigned short indexx = 0;
//	for (unsigned short i = 0; i < size + 1; i++)
//	{
//		if (i == index)
//		{
//			continue;
//		}
//		new_p_arr[indexx] = p_arr[i];
//		indexx++;
//	}
//	delete[] p_arr;
//	return new_p_arr;
//}