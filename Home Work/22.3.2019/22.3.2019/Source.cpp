/*) Дано рядок. Видалити із рядка заданий символ. Результат розмістити у новому рядку. 
2) Розробити програму, яка зчитує з екрану рядок, а потім видає статистику:
 кількість пробільних символів (whitespaces), голосних, приголосних, знаків пунктуації.
 Введення передбачається англомовним. */

# include <iostream>
#include<string>

using namespace std;

void Delete(char *str, char letter) {
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (letter == str[i]) {
			str[i] = ' ';
		}
	}
}

void Status(char *str) {

	int VowelQuantity = 0;
	int ConstantQuantity = 0;
	int PunctuationQuantity = 0;
	int Space = 0;
	int len = strlen(str);
	char Vowell[] = "aAeEiIoOuUyY";
	char Constatnt[] = "";

	for (int i = 0; i < len; i++) {
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122) {

			bool Vowel = false;

			for (int j = 0; j < 12; j++) {
				if (Vowell[j] == str[i]) {
					VowelQuantity++;
					Vowel = true;
				}
			}
			if (!Vowel) {
				ConstantQuantity++;
			}
		}
		
		else {
			if ((int)str[i] == 32) {
				Space++;
			}
			else {
				PunctuationQuantity++;
			}
		}
	}

	cout << "Vowel Quantity " << VowelQuantity << endl;
	cout << "Constant Quantity - " << ConstantQuantity << endl;
	cout << "Space Quantity - " << Space << endl;
	cout << "Punctuation Quantity - " << PunctuationQuantity << endl;
}

int main() {

	char str[255];
	char letter;

	cout << "Enter string:" << endl;

	cin.getline(str, 255);
	
	Status(str);

	cout << "Enter letter you want to be deleted :" << endl;
	cin >> letter;

	Delete(str, letter);
	cout << str << endl;

	system("pause");
	return 0;
}