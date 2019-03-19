#include <iostream>
#include <string>

using namespace std;
//int strlength(char *str) {
//	int counter = 0;
//	while (str[counter] != '0'){
//		counter++; }
//	return counter;
//	}


int main()
{
	//--------------------bolck 1 --------------
	//char str[256];
	//cin >> str;
	//cout << strlength(str) << endl;
	//--------------------bolck 1 --------------

	//--------------------bolck 2 --------------
	/*char str1[255] ;
	char str2[255] ;
	cin >> str1 >> str2;
	strcat_s(str1, str2);
	cout << str1 << endl;*/
	//--------------------bolck 2 --------------

	//--------------------bolck 3--------------
	/*string str = "hello";
	string str1 = "world";
	string res = str + " " + str1 + " " + "myteam";
	cout << res << endl;*/
	//--------------------bolck 3--------------

	//------------------------------------------task 1-----------------------------

	//Вводиться рядок. Яких букв у рядку більше ’а’ чи ’о’ 

	/*char str[255];
	cin >> str;
	cout << strlength(str) << endl;

	int counterA = 0;
	int counterO = 0;

	for ( int i = 0 ; i < strlen(str) ; i ++ ){

		if ( str[i] == 97) {
			counterA++;
		}
		else if ( str[i] == 111 ) {
			counterO++;
		}
	}

	if (counterA > counterO) {
			cout << "A letters are more than O letters " << endl;
			cout << counterA << " > " << counterO << endl;
	}
	else if (counterO > counterA) {
			cout << "O letters are more than A letters " << endl;
			cout << counterA << " < " << counterO << endl;
	}
	else {
			cout << "The O and A letters are EQUAL " << endl;
			cout << counterA << " = " << counterO << endl;
	}*/


	//------------------------------------------task 2 ----------------------------
	//Вводиться рядок. Порахувати кількість латинських букв, цифр та розділових знаків у рядку.  
	/*char str[255];
	int counterL = 0;
	int counterNumber = 0;
	int counterSignal = 0;
	int counterUkrainian = 0;
	cin >> str;
	cout << strlen(str) << endl;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] > 65 && str[i] < 90 || str[i] > 97 && str[i] < 122) {
			counterL++;
		}
		else if (str[i] > 48 && str[i] < 57) {
			counterNumber++;
		}
		else if ( str[i] > 0 && (str[i] < 47) || (str[i] > 58) && (str[i] < 64) || (str[i] > 91) && (str[i] < 96) || (str[i] > 123) && (str[i] < 126))
			counterSignal++ ;
		else if (str[i] > 192 || str[i] < 255) {
			counterUkrainian++;
		}
	}
	cout << "The amount of Latinian letters is : " << counterL << endl;
	cout << "The amount of Numbers is : " << counterNumber << endl;
	cout << "The amount of symbols is : " << counterSignal << endl;
	cout << "The amount of Ukrainian letters is : " << counterUkrainian << endl;*/

	//------------------------------------------task 3 ----------------------------
	//Дано рядок. Замінити у рядку всі великі букви на малі і навпаки.  

	char str[255];
	cin >> str;
	//cout << strlen(str) << endl;
	for (int i = 0; i < strlen(str); i++) {
		/*if (str[i] > 65 && str[i] < 90)// big letters 97 122 
		{
			str[i] = str[i] + 32;
		*/
		 if (str[i] > 97 && str[i] < 122)
		{
			str[i] = str[i] - 32;
		}
	}

	for (int i = 0; i < strlen(str); i++) {
		cout << str[i] <<  " ";
	}





	system("pause");
	return 0;
}