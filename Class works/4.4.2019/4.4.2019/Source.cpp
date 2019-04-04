#include<fstream>
#include<iostream>
#include<string>

using namespace std;

//int main()
//{
	//string STR;
	//ofstream WriteFile;
	////string path = "DB.TXT";
	//string path = "D:/";

	//WriteFile.open(path ,ofstream::app) ;
	//if (!WriteFile.is_open()) {
	//	cout << " Cann't open this file " << endl;
	//	} 
	//else
	//{
	//	cout << "OPENED " << endl;
	//	//char Data;
	//	//while (WriteFile.get(Data)) {
	//	//	cout << Date << endl;
	//	//}
	//	cout << "Enter your text " << endl;
	//	cin >> STR;
	//	WriteFile << STR << endl;
	//}
	
	//ifstream ReadFile;
	//string path = "DB.TXT";
	//ReadFile.open(path);
	//if (!ReadFile.is_open()) {
	//	cout << " Cann't Read this file " << endl;
	//}
	//else {
	//	cout << "OPENED " << endl;
	//	/*char Data;
	//	while (ReadFile.get(Data)) {
	//		cout << Data << endl;
	//	}*/
	//	string Data;
	//	while (!ReadFile.eof()) {
	//		getline(ReadFile, Data);
	//		cout <<  Data  << endl;
	//	}
	//}
	//ReadFile.close();



	

//	system("pause");
//	return 0;
//}

// ============================== TASK =============================


void WriteFile(string Name , string Phone , string Address) {
	ofstream WriteFile;
	string path = "Subsriber.txt";
	WriteFile.open(path, ofstream::app);
	if (!WriteFile.is_open()) {
		cout << " Cann't open this file " << endl;
	}
	else{
		cout << " Typed !!" << endl;
		WriteFile << Name << "\t" << Phone << "\t" << Address << "\t" << endl;
	}
	WriteFile.close();
	cout << "==============================." << endl;
	
}

void Creat_Subscriber(string Name, string Phone, string Address) {
	cout << "Enter your Name :" << endl;
	cin >> Name;
	cout << "Enter the phone number of the subscriber : " << endl;
	cin >> Phone;
	cout << "Enter the Address of the subscriber : " << endl;
	cin >> Address;
	WriteFile(Name, Phone, Address);
}

void ReadFile() {

	ifstream ReadFile;
	string path = "Subsriber.txt";
	ReadFile.open(path);
	if (!ReadFile.is_open()) {
		cout << " Cann't Read this file " << endl;
	}
	else {
		cout << " Reading  " << endl;
		string data;
		while (!ReadFile.eof()) {
			getline(ReadFile,data);
			cout << data  << endl;
		}
	}
	ReadFile.close();
	cout << "==============================." << endl;

}

void Menu(string Name, string Phone, string Address) {
	int Number = 0;
	cout << "Enter the Number of operration you want : \n 1.Creat Subscriber\n2/ReadFile\n" << endl;
	cin >> Number;
	if (Number == 1) {
		Creat_Subscriber(Name, Phone, Address);
	}
	else if (Number == 2) {
		ReadFile();
	}
	else {
		cout << "Unavailable " << endl;
	}
}


int main()
{
	string Name;
	string Phone;
	string Address;
	
	Menu();
	Creat_Subscriber(Name, Phone, Address);
	ReadFile();

	

	system("pause");
	return 0;
}