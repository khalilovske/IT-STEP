#include<iostream>
#include<string>
#include<fstream>
#include<Windows.h>

using namespace std;


void WriteFile(string Book, string Magazine, string Newspaper, string Author, int Year);

void ReadFile();

void Creat_Library(string Book, string Magazine, string Newspaper, string Author, int Year);

void Menu();

void Login();


string path = "Library.txt";



int main()
{
	string Book;
	string Magazine;
	string Newspaper;
	string Author;
	int  Year = 0;

	bool start = true;
	while (start)
	{
		Login();
		int Number = 0;
		cin >> Number;

		switch (Number)
		{
		case 0:
			start = false;
			break;
		case 1:
			Creat_Library(Book, Magazine, Newspaper, Author, Year);
			break;
		case 2:
			ReadFile();
			break;
		default:
			break;
		}
	}

	system("pause");
	return 0;
}


void Creat_Library(string Book, string Magazine, string Newspaper, string Author, int Year)
{
	cout << "Enter your Book's Name :" << endl;
	cin >> Book;
	cout << "Enter your Magazine's Name :" << endl;
	cin >> Magazine;
	cout << "Enter your Newspaper's Name :" << endl;
	cin >> Newspaper;
	cout << "Enter your Author's Name :" << endl;
	cin >> Author;
	cout << "Enter the Production's Year :" << endl;
	cin >> Year;
	WriteFile(Book, Magazine, Newspaper, Author, Year);
}


void Menu() {
	cout << "Enter the Number of operation you want :" << endl;
	cout << "1.Creat Library\n2.Read Library's Files\n0.Exit" << endl;
}

void ReadFile() {
	ifstream ReadFile;
	ReadFile.open(path);
	if (!ReadFile.is_open()) {
		cout << " Cann't Read this file " << endl;
	}
	else {
		cout << " Reading  " << endl;
		string Data;
		while (!ReadFile.eof()) {
			getline(ReadFile, Data);
			cout << Data << endl;
		}
	}
	ReadFile.close();
}


void WriteFile(string Book, string Magazine, string Newspaper, string Author, int Year)
{
	ofstream WriteFile;
	WriteFile.open(path, ofstream::app);
	if (!WriteFile.is_open()) {
		cout << " Cann't open this file " << endl;
	}
	else
	{
		WriteFile << Book << "\t" << Magazine << "\t" << Newspaper << "\t" << Author << "\t" << Year << endl;
		cout << "Data has been added " << endl;
	}
	WriteFile.close();
}


void Login()
{
	string Username;
	string Password;
	string Right_Username = "khalil";
	string Right_Password= "khalil";

	cout << "Enter your Username: " << endl;
	cin >> Username;
	cout << "Enter your Password " << endl;
	cin >> Password;

	if (Password == Right_Password && Username == Right_Username)
	{
		cout << "Access Allowed" << endl << endl << endl;
		Menu();
	}
	else
	{
		cout << "Access denied." << endl;
	}
}
	
		