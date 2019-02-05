/*1. На шоу Пошук Зірок судді кожному учаснику виставляють оцінку від 0 до 10
(оцінка може бути дробовим числом).
Знайти підсумкову оцінку кожного учасника, яка обчислюється як середнє арифметичне, 
але без врахування найкращої та
найгіршої оцінок.Виконати задачу з розбиттям на функції.*/

#include<iostream>
#include<ctime>

using namespace std;


template<typename T>
void FillArr(T arr[], const int participant, const int referee);


template<typename T>
void Print(T arr[], const int participant, const int referee);

int main()
{
	srand(unsigned(time(NULL)));
	const int participant = 6;
	const int referee = 3;
	int arr[participant][referee];

	FillArr(arr, participant, referee);
	Print(arr, participant, referee);
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
	
	