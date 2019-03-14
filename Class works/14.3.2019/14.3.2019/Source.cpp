
	//char str[4]="www";
	//cout << sizeof(char) << endl; // 1
	//cout << sizeof(str) << endl; //4 
	//cout << str << endl;
	//for (int i = 0; i <= strlen(str); i++ )
	//{
	//	cout << str[i] << endl;
	//}
	/*char string1[] = { 'H','e','l','l','o', '\0' };*/
	//cout << string << endl;
	//===========================================//

	//char name[10];
	//cin >> name; //jack
	//cout << name << endl;

	//================================== Strings ===================

# include <iostream>

	using namespace std;

	int main() {

		setlocale(LC_ALL, "ukr");
		//------------------Block1------------------
		/*char str[] = "Hello world!";
		char string[] = { 'H','e','l','l','o','\0' };

		cout << str << endl;
		cout << string << endl;
		cout << strlen(string) << endl;

		char name[255] = "";
		cout << "Enter your name:" << endl;
		cin >> name;
		cout << "Hi, " << name << endl;
		cout << strlen(name) << endl;*/
		//------------------Block1------------------
		//------------------Block2------------------
		/*double a = 65.14231224324234;
		cout << char(a) << endl;
		cout << int(a) << endl;
		cout << float(a) << endl;
		cout << bool(a) << endl;

		int x = a;
		cout << "x " <<x << endl;*/
		//-----------------Block2------------------
		//------------------Block3------------------
		/*char str[] = "Привіт!";
		   cout << str << endl;
		cout << sizeof(char) << endl;

		for (int i = 0; i <= 255; i++) {
			cout << "code = " << i << " char = " << (char)i << endl;
		}

		int a = 65;

		cout << (char)66 << endl;
		cout << (char)32 << endl;
		cout << (char)72 << endl;
		cout << (char)7 << endl;

		char strArr[255];
		cout << "Enter strArr" << endl;
		cin >> strArr;

		for (int i = 0; i < strlen(strArr); i++) {
			cout << "Text: " << strArr[i] << " CharCode = " << int(strArr[i]) << "\t";
		}
		cout << endl;*/
		
		//------------------Block3------------------



		//===========================================TASKS ======================================
		/*Написати програму, яка отримує від користувача довільний набір цифр (кодів) та 
		виводить на екран новоутворений рядок символів. Наприклад, при введенні цифр 65 66 65 на екрані буде ABA */

		/*char strArr[255];
		int Arr[10];
		cout << "Enter your Numbers from 1 to 255" << endl;
		for (int i = 0; i < 10; i++)
		{
			cin >> Arr[i];
			cout << (char)Arr[i] << endl;
		}*/
		


		//==========================Task 2 ======================
		 /*Написати програму, яка отримує від користувача довільний набір cимволів та
		 виводить на екран рядок кодів символів, по суті, закодований рядок. 
		 Наприклад, при введенні ABA на екрані буде 65 66 65.*/

		char strArr[255];
		int Arr[10];
		//char symbol;
		int i = 0;
		cout << "Enter your words " << endl;
		for ( i = 0; i < strlen(strArr); i++)
		{
			cin >> strArr[i];
			cout << int(strArr[i]) << " ";
			
			
		}
		
		cout << "After Encryption : " << endl;
		cout << "================================" << endl;

		strArr[i + 3];
		cout << int(strArr[i]) << " ";

		system("pause");
		return 0;
	}



