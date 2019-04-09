#include<iostream>
#include<ctime>
#include"Arrays.h"

using namespace std;
void SortBubble(int *const arr, int const size){
	int tmp = 0;
	for (int i = size - 1; i >= tmp; i--)
	{
		for (int j = size - 1; j >= tmp; j--)
		{
			if (arr[j] < arr[j - 1]) {
				tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}