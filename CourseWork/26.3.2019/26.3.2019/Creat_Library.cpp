#include"Library.h"

using namespace std;

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