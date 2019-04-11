#pragma once
#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;
void Fill(int *const arr, int const size);

void Print(int *const arr, int const size);

int Address(int *const arr, int const size);

void Push(int *&arr, int size); 

//void Delete(int *&arr, int size);

//int* del_arr_item_ind(int *&p_arr, unsigned short &size, unsigned short index);