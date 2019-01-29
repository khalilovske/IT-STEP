#include<iostream>
using namespace std;
/*Написати функцію, яка приймає три аргументи: години, хвилини, секунди.
Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах */

/*int Time(int Hour, int Minute){

	 return  (Hour * 60) + (Minute * 60);
}
*/

	/*int Hour = 0,  Minute = 0,  Result = 0;
	cout << "ENTER YOUR HOUR AND MINUTE : " << endl;
	cin >> Hour >> Minute;
	Result= Time(Hour, Minute);
	cout << "THE RESULT IS :" << Result << endl;*/


	/*  Написать функцию frame, которая выводит на экран рамку.
	В качестве параметров функции должны передаваться размер рамки.     */
	/*void Frame(int hight, int lenth) {
		for (int i = 0; i < hight; i++) {
			for (int a = 0; a < lenth; a++) {
				if (a == 0 || i == 0 || a == lenth - 1 || i == hight - 1) cout << "#";
				else cout << " ";
			}
			cout << endl;
		}
	}

	int main()
	{

	int hight=0, lenth=0;
		cout << "\n\tEnter a number for lenth: ";
		cin >> lenth;
		cout << "\n\tEnter a number for hight: ";
		cin >> hight;
		Frame(hight, lenth);


	system("pause");
	return 0;
}
*/


//------------TASK 3 deposite ---------
float income(float a, float b, float c) {
	return a + a * b * c / 365 / 100;
}
int main()
{
	float a, b, c;
	cout << "\tEnter a sum which you want to deposit: ";
	cin >> a;
	cout << "\tEnter a percent ( % ) in which you want to deposit: ";
	cin >> b;
	cout << "\tEnter a period of time for which you want to deposit: ";
	cin >> c;
	cout << "\tThat is sum which you will get: " << income(a, b, c) << " . " << endl;
	system("pause");
	return 0;
}




