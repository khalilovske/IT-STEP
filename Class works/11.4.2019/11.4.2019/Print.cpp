#include<ctime>
#include<iostream>
#include "Header1.h"
#include"Header.h"

using namespace std;

void Print(int * const arr, int const size)
{
	for (int i = 0; i < size; i++) 
	{
		cout << "arr [" << i << "]=" << arr[i] << endl;
	}
	cout << "===========================" << endl;

}
