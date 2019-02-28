//--------------------------------Dynamic matrix --------------------------//
/*# include <iostream>
# include <ctime>

using namespace std;

template<typename T, typename T2>
void Fill(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

template<typename T, typename T2>
void Print(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}

int main() {
	srand(unsigned(time(NULL)));
	//==============Block1===================
	int size;
	cout << "Enter arr size : " << endl;
	cin >> size;

	int *arr = new int[size];

	Fill(arr, size);
	Print(arr, size);

	delete[] arr;

	//==============Block1===================

	system("pause");
	return 0;
}*/

//------------------------------TASK 1  ------------------------
/*Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
Функція повертає адресу створеного масиву. 
Виводу масиву 
Доповнення масиву одним елементом. Функція отримує адресу масиву,
розмір та елемент для доповнення. 
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню */
# include <iostream>
# include <ctime>
using namespace std;

template<typename T, typename T2>
void Fill(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

template<typename T, typename T2>
void Print(T arr[], T2 size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << "\t\t";
		cout << " Address = " << arr + i << endl;
	}
}



template<typename T, typename T2>
void Complete(T arr[], T2 size )
{
	int Number = 0;
	cout << "Enter the Number you want to be added : " << endl;
	cin >> Number;
	for (int i = 0 ; i < size + 1 ; i++)
	{
		if  (i == (size + 1)){
			arr[i] = Number;
			cout << "arr [" << i << "]=" << Number << "\t\t";
		}
	}
}

int main()
{
	int size;
	cout << "Enter arr size : " << endl;
	cin >> size;
	
	int *arr = new int[size];
	
	Fill(arr, size);
	Print(arr, size);
	Complete(arr, size +1 );

	

	delete[] arr;

	system("pause");
	return 0;
}