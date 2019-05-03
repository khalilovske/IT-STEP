/*Описати структуру «Людина». Передбачити: 

Заповнення масиву людей 
Вивід інформації з сортуванням по прізвищу та імені 
Вивід списку іменників місяця з вказанням дати народження 
Зміна розміру масиву при додаванні та видаленнні записів 
Пошук по прізвищу та імені 
Редагування запису 
Роботу організувати через меню. Пункти меню обовязково є типами перелічуваної константи. */

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string path = "db.txt";

void Menu() {

	cout << "Select your Operation " << endl;
	cout << "1) Add Contact \n2) View Contact\n0) Exit " << endl;
}

void AddContact() {

	string Name;
	string Surname;
	string Address;
	int Number;

	cout << "Enter your Name :" << endl;
	cin >> Name;

	cout << "Enter your Surname:" << endl;
	cin >> Surname;

	cout << "Enter your Address:" << endl;
	cin >> Address;

	cout << "Enter your Phone Number:" << endl;
	cin >> Number;

	ofstream writeFile;
	writeFile.open(path, ofstream::app);
	if (!writeFile.is_open()) {
		cout << "Can not open the file!" << endl;
	}
	else {
		writeFile << Name << " " << Surname << " " << Address << " " << Number << endl;
		cout << "Contact has been added!" << endl;
	}

	writeFile.close();

}

void ViewAll() {

	ifstream readFile;
	readFile.open(path);

	if (!readFile.is_open()) {

		cout << "File is not open!" << endl;
	}
	else {

		string Data;
		cout << endl;
		while (!readFile.eof()) {

			getline(readFile, Data);
			cout << Data << endl;
		}

	}

}


int main() {

	bool start = true;
	int operation;

	while (start) {

		Menu();

		cout << "Enter the Number of your operation:" << endl;
		cin >> operation;

		switch (operation)
		{
		case 0:

			start = false;
			break;

		case 1:

			AddContact();
			break;

		case 2:

			ViewAll();
			break;

		default:
			break;
		}
	}

	system("pause");
	return 0;
}