/*Написать программу «успеваемость».Пользователь вводит три оценки для каждого ученика.
//	Оценки с физики, математики и англ.языка.Средний бал записываем в масив средних баллов.В результате должно быть 10 средних баллов.
//	Реализовать меню для пользователя.Отсортировать тот массив, информация по котором нам сейчас нужна.
//	Связность оценок должна соблюдаться.Тоесть если math[0] = 5 и engl[0] = 8 то после сортировки массива с оценками за математику, 
//	массивы других оценок так же должны поменяться.
//	Вывод оценок(вывод содержимого массива)
//	Пересдача экзамена(пользователь вводит номер элемента массива и новую оценку)
//	Выходит ли стипендия(стипендия выходит, если средний бал не ниже 10.7)
//	Вывести все оценки самого успешного ученика по английскому языку.
//	Вывести все оценки самого неуспешного ученика в классе
//	Вывести все оценки самого успешного ученика с точных наук(физика и математика).
*/

#include<iostream>

using namespace std;

void FillArray(int  *studentArr, int const Student, int const Subject, int mark) {

	for (int i = 0; i < Student; i++) {
		for (int j = 0; j < Subject; j++)
		{
			cout << "Enter mark for [ " << i + 1 << " ] student for " << j + 1 << " subject:"<<endl;
			cin >> studentArr[mark];
		}
	}
}

void PrintArray(int  *studentArr, int const Student, int const Subject, int mark) {

	cout << "Student\tSubject\tMark" << endl;

	for (int i = 0; i < Student; i++)
	{
		for (int j = 0; j < Subject; j++)
		{
			cout << "[ " << i + 1 << " ]\t" << j + 1 << "\t" << studentArr[mark] << endl;
		}
		if (Student > 1) 
		cout << "===================================" << endl;
	}
}

int main() {

	int Student = 0;
	int Subject = 3;
	int mark = 0;	

	cout << "Subject's List \n Math \n English \n Physics" << endl;
	cout << "Enter the Number of Students :" << endl;
	cin >> Student;

	int arr;

	int *studentArr = new int[Student];

	FillArray(studentArr, Student, Subject, mark);

	cout << "Subject's List \n Math \n English \n Physics" << endl;
	PrintArray(studentArr, Student, Subject, mark);

	system("pause");
	return 0;
}