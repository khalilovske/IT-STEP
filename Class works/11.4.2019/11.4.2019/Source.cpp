//--------------------Dynamic Memory -------------------------
/*#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	/*int *ptr = (int *) malloc(2*sizeof(int));
	ptr[0] = 40;
	ptr[1] = 140;
	cout << "*ptr value: " << ptr[0] << endl;
	cout << "*ptr value: " << ptr[1] << endl;
	free(ptr);*/


	/*int elemSize = 3;
	int *ptr = (int *)calloc(elemSize, sizeof(int));
	ptr[0] = 40;
	ptr[1] = 140;
	ptr[2] = 640;
	cout << "*ptr value: " << ptr[0] << endl;
	cout << "*ptr value: " << ptr[1] << endl;
	cout << "*ptr value: " << ptr[2] << endl;
	cout << "ptr address " << ptr << endl;
	cout << "Old ---------------------- New" << endl;
	ptr = (int *)realloc(ptr, 4 * sizeof(int));
	ptr[3] = 900;
	cout << "*ptr value: " << ptr[0] << endl;
	cout << "*ptr value: " << ptr[1] << endl;
	cout << "*ptr value: " << ptr[2] << endl;
	cout << "*ptr value: " << ptr[3] << endl;
	cout << "ptr address " << ptr << endl;

	free(ptr);

	system("pause");
	return 0;
}*/


//-------------------------------------------Task ------------------------------------
/*Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами. Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву, розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню
malloc calloc alloc free*/

#include<iostream>
#include<ctime>
#include<stdlib.h>
#include"Header1.h"
#include"Header.h"

using namespace std;

int main()
{
	
	srand(unsigned(time(NULL)));
	int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = (int *)malloc(size * sizeof(int));


	Fill(arr, size);

	Print(arr,size);

	Address(arr, size);

	Push(*&arr, size);
	Print(arr, size+1);

	//del_arr_item_ind(*&p_arr, &size, index);

	Print(arr, size );

	free(arr);


	system("pause");
	return 0;
}




