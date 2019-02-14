//#include<iostream>
//using namespace std;
//void PrintA(int a) {
//	a++;
//	cout << "print A and value = " << a << endl;
//	cout << "print A and address = " << &a <<  endl;
//
//}
//void PrintB(int *pointerb) {
//	(*pointerb)++;
//	cout << "print B and value = " << *pointerb << endl;
//	cout << "print B and address = " << pointerb << endl;
//
//}
//int main()
//{
//	int a = 5;
//	cout << "Before a value " << a << endl;
//	cout << "Before a address " << &a << endl;
//	PrintA(a);
//	cout << "after a value " << a << endl;
//	cout << "after a address " << &a << endl;
//	cout << "--------------------------------------" << endl;
//	int b = 50;
//	cout << "Before b value " << b << endl;
//	cout << "Before b address " << &b << endl;
//	PrintB(&b);
//	cout << "after pointerb value " << b << endl;
//	cout << "after pointerb address " << &b << endl;
//	system("pause");
//	return 0;
//}
//



//------------------------------------TASK 1 and 2 -------------------------
//.Используя указатели и оператор разыменования, определить наибольшее из двух чисел.---
//обменять местами значения двух переменных
//#include<iostream>
//#include<ctime>
//using namespace std;
//
//
//
//void Switch(int *pA, int *pB) {
//	int pTMP = *pA;
//	*pA = *pB;
//	*pB = pTMP;
//}
//
//
//int main()
//{
//	srand(unsigned(time( NULL)));
//	int a = rand() % 100, b = rand() % 100;
//	int *pA = &a;
//	int *pB = &b;
//
//	cout << "THE NUMBERS ARE " << a << " AND " << b << endl;
//	cout << "THE addresses ARE " << &a << " AND " << &b << endl;
//	cout << "==============================================>" << endl;
//	cout << "THE NUMBERS ARE by pointers " << *pA << " AND " << *pB << endl;
//	cout << "THE addresses ARE by pointers " << pA << " AND " << pB << endl;
//	if (*pA > *pB) {
//		
//		cout << "A is bigger than b " << endl;
//	}
//	else if (*pA < *pB) {
//		cout << "B is bigger than A " << endl;
//	}
//	else{
//		cout << "A and B are equally " << endl;
//	}
//	Switch(&a,&b);
//	cout << "After Switch " << endl;
//	cout << "A value = " << a << " B value = " << b << endl;
//	cout << "A address = " << &a << " B address = " << &b << endl;
//	cout << "====================================>" << endl;
//
//
//	system("pause");
//	return 0;
//}


//------------------------------------TASK 3 -------------------------
//3.  Написать примитивный калькулятор, пользуясь только указателями

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 0, b = 0,number=0;
//	cout << "Enter two Numbers :" << endl;
//	cin >> a >> b;
//	int *pA = &a;
//	int *pB = &b;
//	cout << "Enter your Number of operation do you want : " << endl;
//	cout << "1 + \n2 - \n 3 / \n 4 * " << endl;
//	cin >> number;
//	if (number == 1) {
//		cout << *pA + *pB << endl;
//	}
//	else if (number == 2) {
//		cout << *pA - *pB << endl;
//	}
//	else if (number == 3) {
//		if (*pB != 0) {
//			cout << *pA / *pB << endl;
//		}
//	}
//	else if (number == 4) {
//		cout << *pA * *pB << endl;
//	}
//	system("pause");
//	return 0;
//}


//---------------------------TASK 4 -------------------------
//Сгенерировать десять массивов из случайных чисел. Вывести их и сумму их элементов на экран.
//Найти среди них один с максимальной суммой элементов. Указать какой он по счету, повторно вывести этот массив и сумму его элементов.
//Заполнение массива и подсчет суммы его элементов оформить в виде отдельной функции.
#include<iostream>
#include<ctime>
using namespace std;

void FillArr(int arr[], const int size);
void PrintArr(int arr[], const int size);
int Sum(int arr[], const int size);
//void find(int arr[], const int size);



int main()
{
	srand(unsigned(time(NULL)));
	const int size = 5;
	int arr[size];
	int arr1[size];
	int arr2[size];
	int arr3[size];
	int arr4[size];
	int arr5[size];

	FillArr(arr, size);
	PrintArr(arr, size);
	int sumArr = Sum(arr, size);
	cout << sumArr << endl;

	FillArr(arr1, size);
	PrintArr(arr1, size);
	int sumArr1 = Sum(arr1, size);
	cout << sumArr1 << endl;

	FillArr(arr2, size);
	PrintArr(arr2, size);
	int sumArr2 = Sum(arr2, size);
	cout << sumArr2 << endl;
	/*find(arr, size);*/
	FillArr(arr3, size);
	PrintArr(arr3, size);
	int sumArr3 = Sum(arr3, size);
	cout << sumArr3 << endl;

	FillArr(arr4, size);
	PrintArr(arr4, size);
	int sumArr4 = Sum(arr4, size);
	cout << sumArr4 << endl;

	FillArr(arr5, size);
	PrintArr(arr5, size);
	int sumArr5 = Sum(arr5, size);
	cout << sumArr5 << endl;

	if (sumArr >> sumArr1 && sumArr >> sumArr2 && sumArr >> sumArr3 && sumArr >> sumArr4 && sumArr >> sumArr5) {
		cout << "The First matrix has the maximum summary : " << sumArr << endl;
	}
	else if (sumArr1 >> sumArr && sumArr1 >> sumArr2 && sumArr1 >> sumArr3 && sumArr1 >> sumArr4 && sumArr1 >> sumArr5) {
		cout << "The First matrix has the maximum summary : " << sumArr1 << endl;
	}
	else if (sumArr2 >> sumArr && sumArr2 >> sumArr1 && sumArr2 >> sumArr3 && sumArr2 >> sumArr4 && sumArr2 >> sumArr5) {
		cout << "The First matrix has the maximum summary : " << sumArr2 << endl;
	}
	else if (sumArr3 >> sumArr && sumArr3 >> sumArr1 && sumArr3 >> sumArr2 && sumArr3 >> sumArr4 && sumArr3 >> sumArr5) {
		cout << "The First matrix has the maximum summary : " << sumArr3 << endl;
	}
	else if (sumArr4 >> sumArr && sumArr4 >> sumArr1 && sumArr4 >> sumArr2 && sumArr4 >> sumArr3 && sumArr4 >> sumArr5) {
		cout << "The First matrix has the maximum summary : " << sumArr4 << endl;
	}




	system("pause");
	return 0;

}
void FillArr(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintArr(int arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

int Sum(int arr[], const int size) {
	float Sum = 0;
	for (int i = 0; i < size; i++)
	{
		Sum += arr[i];
	}
	return  Sum;
}

/*void find(int arr[], const int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < arr[i + 1]) {
			 temp = arr[i + 1];
			arr[i + 1] =  arr[i];
			arr[i] = temp;
		}
	}
	cout << "The biggest number is : " << temp << endl;
}
*/


	

