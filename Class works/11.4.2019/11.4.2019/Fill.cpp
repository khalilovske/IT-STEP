#include "Header1.h"
#include<iostream>
#include<ctime>
#include"Header.h"

using namespace std;

void Fill(int * const arr, int const size)
{
	for (int i = 0; i < size; i++) {
			arr[i] = rand() % 10;
		}
}

