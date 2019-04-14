/*Написати програму, яка отримує від користувача довільний набір cимволів,
шифрує його та виводить на екран новоутворений рядок. Для шифрування скористатись звичайними арифметичними операціями ++, --, збільшення або зменшення на якесь число тощо.
Наприклад, при введенні ABА на екрані буде ВСВ.*/

#include <iostream>
#include<string>

using namespace std;
char str[255];
int choice = 0;

void Crypt(int choice) {
	cout << "Enter phrase to Crypt:" << endl;
	cin >> str;

	for (int i = 0; i < strlen(str); i++) {

		if (i % 2 == 0) {
			cout << (char)((int)str[i] + 3);
		}
		else {
			cout << (char)((int)str[i] - 2);

		}
	}
}

void Decrypt(int choice) {

	cout << "Enter phrase to Deccrypt:" << endl;
	cin >> str;

	for (int i = 0; i < strlen(str); i++) {

		if (i % 2 == 0) {
			cout << (char)((int)str[i] - 3);
		}
		else {
			cout << (char)((int)str[i] + 2);
		}
	}
}

int main() {

	cout << "Enter your choice :" << endl;
	cout << "1 - Drypt\n2 - Decrypt" << endl;
	cin >> choice;

	if (choice == 1) {
		Crypt(choice);
		cout << endl;
	}
	else if (choice == 2) {
		Decrypt(choice);
		cout << endl;
	}

	system("pause");
	return 0;
}

