#include<iostream>
using namespace std;
/*Написати функцію, яка приймає три аргументи: години, хвилини, секунди.
Функція повинна повертати еквівалент переданого їй тимчасового значення в секундах */

int Time(int Hour, int Minute){

	 return  (Hour * 60) + (Minute * 60);
}

int main()
{
	int Hour = 0,  Minute = 0,  Result = 0;
	cout << "ENTER YOUR HOUR AND MINUTE : " << endl;
	cin >> Hour >> Minute;
	Result= Time(Hour, Minute);
	cout << "THE RESULT IS :" << Result << endl;
	system("pause");
	return 0;
}





