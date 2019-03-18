#include<iostream>
#include<ctime>
using namespace std;

template < typename T1 >
int MyCard(T1 a, T1 b);

template < typename T1 >
int EnCard(T1 a, T1 b);

int MySum = 0;
int EnSum = 0;

int main()
{
	srand(unsigned(time(NULL)));
	int Choice = 1;
	int a = 0;
	int b = 0;
	cout << "\n\t\t\t\t\t\tGame 21\n" << "\n\tInstructions: to make move press \"1\" . That player who reach 21 points first win!\n\n\tYour opponent is Enemy .\n\n\tNow make your move! Press 1 : ";
	do {
		cin >> Choice;
		if (Choice == 1) {
			MySum += MyCard(a, b);
			cout << "\n\tMy  points: " << MySum << endl;
			EnSum += EnCard(a, b);
			cout << "\n\tEnemy's  points: " << EnSum << endl;
			cout << "\n\tDo you want to continue? If yes, press 1! ";
			cin >> Choice;
			if (Choice == 1) {
				MySum += MyCard(a, b);
				cout << "\n\tMy points: " << MySum << endl;
				EnSum += EnCard(a, b);
				cout << "\n\tEnemy's  points: " << EnSum << endl;
				cout << "\n\tDo you want to continue? If yes, press 1! ";
				if (EnSum >= 21) {
					cout << "\n\n\tEnemy win! " << endl;
				}
				else cout << "\n\n\tYou win! Congratulations!" << endl;
				cin >> Choice;
				if (Choice == 1)
					MySum += MyCard(a, b);
				cout << "\n\tMy points: " << MySum << endl;
				EnSum += EnCard(a, b);
				cout << "\n\tEnemy's  points: " << EnSum << endl;
				cout << "\n\tDo you want to continue? If yes, press 1! ";
				cin >> Choice;
				if (EnSum >= 21) {
					cout << "\n\n\tEnemy win! " << endl;
				}
				else cout << "\n\n\tYou win! Congratulations!" << endl;
			}

		}
		else cout << "\n\tWrong button!" << endl;
	} while (EnSum >= 21 || MySum >= 21);
	system("pause");
	return 0;
}

template < typename T1 >
int MyCard(T1 a, T1 b) {
	int LocalMySum = 0;
	a = rand() % 10;
	b = rand() % 10;
	LocalMySum = a + b;
	cout << "\n\tNumber of my points: " << a << " and " << b << " . " << endl;
	return LocalMySum;
}

template < typename T1 >
int EnCard(T1 a, T1 b) {
	int LocalEnSum = 0;
	a = rand() % 10;
	b = rand() % 10;
	LocalEnSum = a + b;
	return LocalEnSum;
}