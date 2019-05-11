#include"Library.h"

string path = "Library.txt";

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