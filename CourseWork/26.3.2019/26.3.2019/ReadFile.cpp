#include"Library.h"
string path = "Library.txt";

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

