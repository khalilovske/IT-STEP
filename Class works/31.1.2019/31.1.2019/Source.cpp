//------------------------------------Task 1 --------------------------//

// Написти перевантажені функції для знаходження добутку трьох переданих чисел.
/*#include<iostream>
using namespace std;


int Plus(int a, int b, int c);
float Plus(float a, int b, float c);
float Plus(float a, float b, float c);
float Plus(int a, int b, float c);
float Plus(int a, float b, float c);
float Plus(int a, int b, float c);
float Plus(float a, int b, float c);
float Plus(int a, float b, int c);
float Plus(float a, int b, int c);


int main()
{
	
	float a, b, c;
	
	cout << "ENTER THREE DIGITS : " << endl;
	cin >> a >> b >> c;

	
	cout << Plus(a,b,c) << endl;

	system("pause");
	return 0;
}


int Plus(int a, int b, int c) {

	return a + b + c;

	}
float Plus(float a, float b, float c) {

	return a + b + c;
}

float Plus(int a, int b, float c) {

	return a + b + c;
}
float Plus(int a, float b, float c){

	return a + b + c;
}

float Plus(float a, int b, float c) {

	return a + b + c;
}
float Plus(int a, float b, int c) {

	return a + b + c;
}
float Plus(float a, int b, int c) {

	return a + b + c;
}
*/


//--------------------------------------------TASK 2 -------------------------------------------//


/*Написати наступні функції, які в якості параметра приймають одновимірний масив і його розмірністю.
Перевірити роботу функції для одновимірних масивів довжини 10 та довжини 7. 
функцію Fill(), яка заповнює одновимірний масив випадковими значеннями в діапазоні[-12..20]
шаблонну функцію Print(), яка виводить елементи масиву на екран.Примітка!Протестувати дану функцію на масивах типу int, double,
функцію, яка повертає кількість відємних елементів масиву
перевантажені функції :
-для знаходження середнього арифметичного елементів масиву
- для знаходження максимального елемента масиву в проміжку(між двома вказаними індексами)*/
/*#include<iostream>
#include<ctime>
using namespace std;

void FillArr(int arr[], const int SIZE);
void FillArr(double arr[], const int SIZE);
void Print(int arr[], const int SIZE);
void Print(double arr[], const int SIZE);
void Find(int arr[], const int SIZE);
void Find(double arr2[], const int SIZE1);
int Biggest(int arr[], const int SIZE);
double Biggest(double arr2[], const int SIZE1);

int main()
{
	srand(unsigned(time(NULL)));
	const int SIZE = 10;
	int arr[SIZE];
	const int SIZE1 = 7;
	double arr2[SIZE1];
	
	FillArr(arr, SIZE);
	Print(arr, SIZE);
	Find(arr, SIZE);
	Biggest(arr,SIZE);
	int Big = Biggest(arr, SIZE);
	cout << "Big " << Big << endl;
	cout << "----------------------------------->" << endl;
	FillArr(arr2, SIZE1);
	Print(arr2, SIZE1);
	Find(arr2, SIZE1);
	int Big2 = Biggest(arr2, SIZE1);
	cout << "Big " <<Big2 << endl;
	cout << "----------------------------------->" << endl;

	system("pause");
	return 0;
}

void FillArr(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 40 - 20;
	}
}

void FillArr(double arr2[], const int SIZE1) {
	for (int i = 0; i < SIZE1; i++) {
		arr2[i] = rand() % 40 - 20;
	}
}

void Print(int arr[], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		cout << " arr [ " << i << " ] = " << arr[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}
void Print(double arr2[], const int SIZE1) {
	for (int i = 0; i < SIZE1; i++)
	{
		cout << " arr2 [ " << i << " ] = " << arr2[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}

void Find(int arr[], const int SIZE) {
	double cered=0;
	for (int i = 0; i < SIZE; i++) {
		cered += arr[i];
	}
	cout << "THE cered = " << cered/SIZE << endl;
	cout << "----------------------------------->" << endl;
}


void Find(double arr2[], const int SIZE1) {
	double cered = 0;
	for (int i = 0; i < SIZE1; i++) {
		cered += arr2[i];
	}
	cout << "THE cered = " << cered / SIZE1 << endl;
	cout << "----------------------------------->" << endl;
}

int Biggest(int arr[], const int SIZE)
{
	int Big = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < Big)Big = arr[i];
	}
	return Big;
}
double Biggest(double arr2[], const int SIZE1)
{
	int Big = 0;
	for (int i = 0; i < SIZE1; i++)
	{
		if (arr2[i] < Big)Big = arr2[i];
	}
	return Big;
}

*/

/* -------------------------------- TASK 3 ---------------------------------*/
/*Написати наступні функції, які в якості параметра приймають двохвимірний масив і його розмірності. 
Перевірити роботу функції для двохвимірних масивів розмірністю 3х4 та 7х5. 
шаблонну функцію Fill(), яка заповнює двохвимірний масив випадковими значеннями в діапазоні [1..30] 
функцію Print(), яка виводить елементи масиву на екран в вигляді матриці. 
функцію, яка виводить на екран вказаний рядок */

/*
#include<iostream>
#include<ctime>
using namespace std;

const int row = 3, line = 4;

void FillArr(int arr[row][line], const int row,const int line );
void Print(int arr[row][line], const int row, const int line);



int main()
{
	srand(unsigned(time(NULL)));
	
	int arr[row][line];
	FillArr(arr, row, line);
	Print(arr, row, line);

	system("pause");
	return 0;
}

void FillArr(int arr[row][line], const int row, const int line) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++) {
			arr[i][j] = rand() % 40 + -20;
		}
	}
}

void Print(int arr[row][line], const int row,const int line) {
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < line; j++) {
			cout << " arr [ " << i << " ]  " << "["<< j <<"] = "<< arr[i][j] << endl;
		}
	}
	cout << "----------------------------------->" << endl;
}*/



//-------------------------------TASK 4 ----------------------	//
/*Даний масив чисел. Написати функцію, яка сортує масив по зростанню або по спаданню, в залежності від третього параметра функції.
Якщо він рівний 0, сортування йде по спаданню, якщо 1, тоді по зростанню. Перші 2 параметра функції - це масив і його розмір, 
третій параметр по замовчуванню рівний 1*/


