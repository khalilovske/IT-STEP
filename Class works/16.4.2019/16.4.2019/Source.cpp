#include<iostream>
#include<string>

using namespace std;

/*struct Person {
	string Name;
	unsigned int Age : 7;
	void ShowInfo() {
		cout << "Name :"  << Name << "\nAge :" << Age << endl;
	}
};

int main()
{
	Person Bill;
	Bill.Name = "Bill";
	Bill.Age =128;
	Bill.ShowInfo();

	
	system("pause");
	return 0;
}*/


//---------------------------------- Task ------------------------------
/*Створити структуру з бітовими полями Час(години. хвилини, секунди).
Продумати яка мінімальна кількість біт потрібна для збереження певного  елемента структури. Визначити функції:
заповнення об’єкта структури з клавіатури
вивід  об’єкта структури  на екран*/

struct Time {
	unsigned int Year : 12;
	unsigned int Month : 4;
	unsigned int Week : 3;
	unsigned int Day : 5;
	unsigned int Hour : 5;
	unsigned int Minute : 6;
	unsigned int Second : 6;
	void ShowTime() {
		cout << "Year: " << Year << "\nMonth:" << Month << "\nWeek:" << Week << "\nDay:"
		<< Day << "\nHour:" << Hour << "\nMinute:"<< Minute << "\nSecond:" << Second << endl << endl;
	}
};

int main()
{
	Time RIK;
	RIK.Year = 2022;
	RIK.Month = 9;
	RIK.Week = 4;
	RIK.Day = 3;
	RIK.Hour = 20;
	RIK.Minute = 59;
	RIK.Second = 45;
	RIK.ShowTime();

	system("pause");
	return 0;
}