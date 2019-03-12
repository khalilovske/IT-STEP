/*Написать программу «успеваемость».Пользователь вводит три оценки для каждого ученика.
//	Оценки с физики, математики и англ.языка.Средний бал записываем в масив средних баллов.
В результате должно быть 10 средних баллов.
//	Реализовать меню для пользователя.Отсортировать тот массив, информация по котором нам сейчас нужна.
//	Связность оценок должна соблюдаться.Тоесть если math[0] = 5 и engl[0] = 8 то после сортировки массива с оценками за математику, 
//	массивы других оценок так же должны поменяться.
//	Вывод оценок(вывод содержимого массива)
//	Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
//	Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
//	Вывести все оценки самого успешного ученика по английскому языку.
//	Вывести все оценки самого неуспешного ученика в классе
//	Вывести все оценки самого успешного ученика с точных наук(физика и математика).*/

#include<iostream>

using namespace std;

int Grade1 = 0, Grade2 = 0, Grade3 = 0;

void Fill(int *const arr, int const Student, int Grade1, int Grade2, int Grade3) {
	for (int i = 0; i < Student; i++) {
		for (int j = 0; j < Student; j++) {
			for (int k = 0; k < Student; k++) {
				arr[i] = Grade1;
				arr[j] = Grade2;
				arr[k] = Grade3;
			}
		}
	}
}


void Print(int *const arr, int const Student, int Grade1, int Grade2, int Grade3) {
	for (int i = 0; i < Student; i++) {
		for (int j = 0; j < Student; j++) {
			for (int k = 0; k < Student; k++) {
			}}}
	cout << " Math : " << Grade1 << "\t Physics : " << Grade2 << "\t English : " << Grade3 << endl;
}
	

int main()
{
	int Student=0;
	int *arr = new int [Student];
	cout << "Enter the Number of your Students : " << endl;
	cin >> Student;
	cout << "Enter Grades of Students : " << endl;
	cin >> Grade1>>Grade2>>Grade3;

	Fill( arr, Student,Grade1,Grade2,Grade3);

	Print(arr, Student, Grade1, Grade2, Grade3);

	delete[] arr;

	system("pause");
	return 0;
}