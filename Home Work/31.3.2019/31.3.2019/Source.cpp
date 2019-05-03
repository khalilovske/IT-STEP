/*Написати програму, 
яка реалізує телефонну книгу з вказаною користувачем кількістю абонентів і
всіма необхідними функціями.
 Використати вкладені структури (для адреси чи ПІБ). */

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Info {

	string name;
	string surname;
	int  number;

	void ShowInfo() {

		cout << "Name: " << name << "\nSurname: " << surname << "\nPhone number: " << number << endl;
	};

	string SaveFile() {

		string txt;

		txt = "\n\tName: " + name + "\n\tSurname: " + surname + "\n\n\tPhone number: " + to_string(number);

		return txt;
	}
};

void FillInfo() {

	int quantity = 0;

	cout << "Enter the quantity of your Clients: ";

	cin >> quantity;

	Info *Client = new Info[quantity];

	for (int i = 0; i < quantity; i++)
	{
		cout << "Enter name of abonement: " << endl;
		cin >> Client[i].name;
		cout << "Enter surname of abonement: " << endl;
		cin >> Client[i].surname;
		cout << "Enter phone number of abonement: " << endl;
		cin >> Client[i].number;
	}
	ofstream file;

	file.open("PhoneBook.txt", ofstream::app);

	for (int i = 0; i < quantity; i++)
	{
		file << Client[i].SaveFile();
		file.close();
	}

}

int main() {

	FillInfo();

	cout << "Data has been added" << endl;

	system("pause");
	return 0;
}