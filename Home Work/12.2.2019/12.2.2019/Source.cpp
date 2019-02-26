/*1. Написати функцію, яка отримує ціле шестизначне число і визначає чи є воно щасливим.
(Число є щасливим, якщо сума його перших трьох цифр = сумі останніх трох цифр.
 Наприклад, 1331. 45154 ). */

/*#include<iostream>
#include<ctime>

using namespace std;
void Fill(int Arr[], const int size);
void Print(int Arr[], const int size);
void Check(int Arr[], const int size);


int main()
{
	const int size = 6;
	int Arr[size] = {};
	srand(unsigned(time(NULL)));

	Fill(Arr,size);
	Print(Arr,size);
	Check(Arr,size);

	system("pause");
	return 0;
}

void Fill(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 10;
	}
	cout << endl;
}
void Check(int Arr[], const int size)
{
	int a = Arr[0] + Arr[1] + Arr[2];
	int b = Arr[3] + Arr[4] + Arr[5];
	if (a == b)
	{
		cout << "The Current Number is a Happy Number : " << a << " = " << b << endl;
	}
	else 
	{
		cout << "The Current Number is NOT a Happy Number " << endl;
	}
}

void Print(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i];
	}
	cout << endl;
}*/

/*2. Написати функцію, яка отримує одновимірний масив, 
друкує прості числа, які зустрічаються у ньому та повертає їх кількість.
Перевірити роботу функції. 
*/

#include<iostream>
#include<ctime>
using namespace std;
void Fill(int Arr[], const int size);
void Print(int Arr[], const int size);
void PrintSpecific(int Arr[], const int size);

int main()
{
	const int size = 10;
	int Arr[size] = {};
	srand(unsigned(time(NULL)));

	Fill(Arr, size);
	Print(Arr, size);
	PrintSpecific(Arr, size);

	system("pause");
	return 0;
}

void Fill(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		Arr[i] = rand() % 10;
	}
}

void Print(int Arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << Arr[i] << endl;
	}
	cout << "----------------------------------->" << endl;
}

void PrintSpecific(int Arr[], const int size)
{
	int Sum = 0, Counter = 0 ;
	for (int i = 0; i < size ; i++)
	{
		 if (Arr[i] == Arr[i+1])
		{
			Counter++;
			cout << Arr[i] << endl;
			Sum += Arr[i];
		}
	}
	cout << "The Quantity of Matched Numbers is : " << Counter << endl;
	cout << "The Summary of these matched Numbers is : " << Sum << endl;
}