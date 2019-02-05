/*1. На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10
(оцінка може бути дробовим числом).
Знайти підсумкову оцінку кожного учасника, яка обчислюється як середнє арифметичне, 
.Виконати задачу з розбиттям на функції.*/

/*#include<iostream>
#include<ctime>

using namespace std;


template<typename T>
void FillArr(T arr[], const int participant, const int referee);


template<typename T>
void Print(T arr[], const int participant, const int referee);


template<typename T>
int arithmetic(T arr[], const int participant, const int referee);


int main()
{
	srand(unsigned(time(NULL)));
	const int participant = 6;
	const int referee = 3;
	int arr[participant][referee];


	
	FillArr(arr, participant, referee);
	Print(arr, participant, referee);
	arithmetic(arr, participant, referee);
	system("pause");
	return 0;
}

template<typename T>
void FillArr(T arr[], const int participant, const int referee) {
	for (int i = 0; i < participant; i++) {
		for (int j = 0; j < referee; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}


template<typename T>
void Print(T arr[], const int participant, const int referee){
         for (int i = 0; i < participant; i++)
	{
		for (int j = 0; j < referee; j++) {
			cout << "The Participant Number " << i << " From Referee Number " << j << "  Has  " << arr[i][j] <<"  degeree  "<< endl;

		}
		cout << "----------------------------------->" << endl;
	}
}
	

template<typename T>
int  arithmetic(T arr[], const int participant, const int referee)
{
	float sum = 0;
	for (int i = 0; i < participant; i++)
	{
		for (int j = 0; j < referee; j++)
		{
			sum += arr[i][j];
		}
		cout << " The Sum for the Participant Nmuber " << i << " is " << sum << endl;
		sum = 0;
	}
	return 0;
}*/

/*2. Rock, Paper, Scissors Game.Write a program that lets the user play the game of Rock, Paper, Scissors
against the computer.The program should work as follows.
1. When the program begins, a random number in the range of 1 through 3 is generated.If the number is 1, 
then the computer has chosen rock.If the number is 2,
then the computer has chosen paper.If the number is 3, then the computer has chosen scissors.
(Don’t display the computer’s choice yet.)
2. The user enters his or her choice of rock, paper, or scissors at the keyboard.
(You can use a menu if you prefer.)
3. The computer’s choice is displayed.
4. A winner is selected according to the following rules :
	If one player chooses rock and the other player chooses scissors, then rock
wins. (The rock smashes the scissors.)
	If one player chooses scissors and the other player chooses paper, then scissors
wins. (Scissors cuts paper.)
	If one player chooses paper and the other player chooses rock, then paper wins. (Paper wraps rock.)*/

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	srand(unsigned(time(NULL)));
	int Number = 0, NumberPC;
	cout << "Tap Enter to make the PC choose : " << endl;
	NumberPC = rand() % 3  + 1;       //1 is Rock         2 is paper      3 is scissors
	//cout << "The PC choice is : " << NumberPC <<endl;


	cout << "ENTER YOUR CHOICE \n" << "1 is Rock         2 is paper      3 is scissors" << endl;
	cin >> Number;
	cout << "The PC choice was :" << NumberPC << endl;
	if (Number == 1 && NumberPC == 3 || Number == 2 && NumberPC == 1 || Number == 3 && NumberPC == 2) {
		cout << " YOU WON " << endl;
	}
	else if (Number == 1 && NumberPC == 2 || Number == 3 && NumberPC == 1 || Number == 1 && NumberPC == 2) {
		cout << " PC is Won " << endl;
	}
	else if (Number == 1 && NumberPC == 1 || Number == 2 && NumberPC == 2 || Number == 3 && NumberPC == 3) {
		cout << "No one wins " << endl;
	}
	else if (Number > 3) {
		cout << "You Have to Reenter Your Choice : " << endl;
	}
	
	

	system("pause");
	return 0;
}


	