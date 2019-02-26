/*Написати рекурсивну функцію, яка отримує ціле число і виводить його у двійковій системі числення*/
#include<iostream>
//#include<ctime>
using namespace std;
void Binary(int Number)
{
	if (Number >= 2)
	{
		(Number / 2);
		Binary(Number / 2);
	}

	cout << Number % 2;
}
int main()
{
	//srand(unsigned(time(NULL)));
	//int Number = rand() % 1000;
	int Number = 0;
	cout << "Enter Your Number : " << endl;
	cin >> Number;
	//cout << "Your Random Number is : " << Number << endl;
	cout << "Your Number in Binary System is : " ;
	Binary(Number);

	system("pause");
	return 0;
}

