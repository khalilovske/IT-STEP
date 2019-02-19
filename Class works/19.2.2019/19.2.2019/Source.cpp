//------------------------------------- Pointers and References ------------------------------------
//# include <iostream>
//
//
//using namespace std;
//
//void FVAR(int a) {
//	cout << "FVAR BEFORE a  value: " << a << " : a addr : " << &a << endl;
//	a += 100;
//	cout << "FVAR AFTER a  value: " << a << " : a addr : " << &a << endl;
//}
//void FREF(int &a) {
//	cout << "FREF BEFORE a  value: " << a << " : a addr : " << &a << endl;
//	a += 300;
//	cout << "FREF AFTER a  value: " << a << " : a addr : " << &a << endl;
//}
//
//void FPTR(int *a) {
//	cout << "FPTR BEFORE a  value: " << *a << " : a addr : " << a << endl;
//	*a += 500;
//	cout << "FPTR AFTER a  value: " << *a << " : a addr : " << a << endl;
//}
//
//
//int main() {
//	int a = 10;
//	//int *pA = &a;
//	cout << "main a  value: " << a << "  : a addr : " << &a << endl;
//	//cout << "*pA  value: " << *pA << " : *pA addr : " << pA << endl;
//
//	/*int &Ra = a;
//
//	/*cout << "a  value: " << a << " : a addr : " << &a << endl;
//	cout << "&Ra  value: " << Ra << " : &Ra addr : " << &Ra << endl;*/
//
//	FVAR(a);
//	FREF(a); //FREF( Ra );
//	FPTR(&a);
//
//	cout << "main a  value: " << a << "  : a addr : " << &a << endl;
//
//	system("pause");
//	return 0;
//}
//
//
//
////#include<iostream>
////
////using namespace std;
////
////void FVAL(int a) {
////	cout << "FVAL A VALUE = " << a << "A ADDERESS = " << &a << endl;
////	a += 100;
////	cout << "FVAL A VALUE = " << a << "A ADDERESS = " << &a << endl;
////}
////
////void FRFF(int &a)
////{
////	cout << "FRFF A VALUE = " << a << "A ADDERESS = " << &a << endl;
////	a+= 300;
////	cout << "FRFF A VALUE = " << a << "A ADDERESS = " << &a << endl;
////}
////
////
////int main()
////{
////
////
////	int a = 10;
////	int &RA = a;
////	//int *p;
////    //int &R;
////
////	//cout << "a = " << a << endl;
////	//cout << "&a = " << &a << endl;
////	//cout << "RA = " << RA << endl;
////	//cout << "&RA = " << &RA << endl;
////	cout << "A VALUE = " << a << " A ADDERESS = " << &a << endl;
////	 FVAL(a);
////	 FRFF(RA); // or FRFF(a)
////
////	cout << "------------------------------------" << endl;
////	 
////	cout << " A VALUE = " << a << "A ADDERESS = " << &a << endl;
////	system("pause");
////	return 0;




// ------------------------------------- Task 1 -----------------------
//Написати функцію, яка приймає вказівник на змінну і записує в неї результат множення на  самоу себе.

//#include<iostream>
//using namespace std;
//void Mnozh(int *PointerA) {
//	cout << " The Result of multiplication is : " << (*PointerA)*(*PointerA) << endl;
//}
//int main()
//{
//	int A = 10;
//	int *PointerA = &A;
//	Mnozh(PointerA);
//	system("pause");
//	return 0;
//}

//------------------------------ Task 2 -------------------------
//Дано три числа. Оголосити посилання на ці числа. Отримати добуток трьох заданих чисел, 
//середє арифметичне, найменше з них, користуючись непрямим доступом до чисел (через посилання)

//#include<iostream>
//using namespace std;
//void Sum(int &A, int &B, int &C) {
//	cout << "The Sum of these Numbers is : " << A + B + C << endl;
//}
//void AVERAGE(int &A, int &B, int &C) {
//	cout << "The Average these Numbers is : " << (A + B + C )/ 3 << endl;
//}
//int main(){
//	int A = 6, B = 8, C = 10;
//	int &RefA = A, &RefB = B, &RefC = C;
//	Sum(A, B, C);
//	AVERAGE(A, B, C);
//	system("pause");
//	return 0;
//}

//------------------------------ Task 3 -------------------------
//Дано два масиви, впорядковати їх по зростанню. Сформуйте масив який складається з елементів масивів А і В, 
//впорядкованих по зростанню і виводить адреси елеиентів масиву
#include<iostream>
#include<ctime>
using namespace std;

template<typename T>
void Sort(T arr[], const int size);


template<typename T>
void Printnew(T arr1[], T arr2[], T arrNew[], const int SIZE, const int size);

template<typename T>
void SplitArr(T arr1[], T arr2[], T arrNew[], const int SIZE, const int size);

template<typename T>
void FillArr(T arr[], const int size);

template<typename T>
void Print(T arr[], const int size );

int main()
{
	srand(unsigned(time(NULL)));
	const int size = 5;
	const int SIZE = 10;
	int arr1[size];
	int arr2[size];
	int arrNew[SIZE];

	FillArr(arr1, size);
	FillArr(arr2, size);
	Print(arr1, size);
	Print(arr2, size);
	Sort(arr1, size);
	Sort(arr2, size);

	SplitArr(arr1, arr2, arrNew, SIZE, size);
	Printnew(arr1, arr2, arrNew,SIZE, size);



	system("pause");
	return 0;
}
template<typename T>
void FillArr(T arr[], const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

template<typename T>
void Print(T arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	cout << "------------------------------------------------" << endl;
}

template<typename T>
void Sort(T arr[], const int size) {
	for (int i = size - 1; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

	cout << "After sort ================================>" << endl;
	for (int i = 0; i < size; i++) {
		cout << "i => " << arr[i] << endl;
	}
}

template<typename T>
void SplitArr(T arr1[], T arr2[], T arrNew[], const int SIZE, const int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < SIZE; j++) {
			arr1[i][j]=arrNew[i];
		}
	}
}


template<typename T>
void Printnew(T arr1[], T arr2[], T arrNew[], const int SIZE, const int size){
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "arr[" << i << "]["<<j<<"]= " << arrNew[i] << endl;
		}
	}
	cout << "------------------------------------------------" << endl;
}