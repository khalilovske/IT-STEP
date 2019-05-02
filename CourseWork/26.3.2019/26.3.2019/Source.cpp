//Предметна область - бібліотека.
//Розв'язувані задачі: видача довідок про наявність книг, журналів, газет. Реалізувати наступні сервіси: 
//Заповнення бази даних
//Перегляд даних про всі джерела
//Доповнення бази даних записом джерела
//Видалення джерела із бази даних
//Упорядкування по полях : тип інформаційного джерела(книга, журнал, газета) і назва
//Пошук : наявність заданої книги(відомі автор і назва), наявність заданого журналу
//	Вибірка : книги автора ХХ; книги певної категорії(фантастика, детектив тощо), журнали за певний рік(відомі рік і назва журналу)
//	Обчислення: кількість книг деякої категорії
//	Корекція : видалення зведень про газети за певний рік
//	Табличний звіт : список боржників книг певного автора
//	Для обробки даних скористатися динамічним масивом покажчиків на структури відповідного типу.

#include<iostream>
#include<string>
#include<fstream>

using namespace std;
void WriteFile(string Book, string Magazine, string Newspaper, string Author, int Year)
{
	ofstream WriteFile;
	string path = "Library.txt";
	WriteFile.open(path, ofstream::app);
	if (!WriteFile.is_open()) {
		cout << " Cann't open this file " << endl;
	}
	else
	{
		WriteFile << Book << "\t" << Magazine << "\t" << Newspaper << "\t" << Author << "\t" << Year << endl;
	}
	WriteFile.close();
	cout << "==============================." << endl;
}

void ReadFile() {
	ifstream ReadFile;
	string path = "Library.txt";
	ReadFile.open(path);
	if (!ReadFile.is_open()) {
		cout << " Cann't Read this file " << endl;
	}
	else {
		cout << " Reading  " << endl;
		string data;
		while (!ReadFile.eof()) {
			getline(ReadFile, data);
			cout << data << endl;
		}
	}
	ReadFile.close();
	cout << "==============================." << endl;
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
	cout << "Enter the Production's Year :" << endl;
	WriteFile(Book, Magazine, Newspaper, Author, Year);
}

void Menu(string Book, string Magazine, string Newspaper, string Author, int Year) {
	int Number = 0;
	cout << "Enter the Number of operration you want : \n 1.Creat Library\n2/Read Library's Files \n" << endl;
	cin >> Number;
	if (Number == 1) {
		Creat_Library(Book, Magazine, Newspaper, Author, Year);
	}
	else if (Number == 2) {
		ReadFile();
	}
	else {
		cout << "Unavailable " << endl;
	}
}

int Year;
int main()
{	
	string Book;
	string Magazine;
	string Newspaper;
	string Author;
	

	Menu(Book,Magazine,Newspaper,Author,Year);
	Creat_Library(Book,Magazine,Newspaper,Author,Year);
	ReadFile();


	system("pause");
	return 0;
}


