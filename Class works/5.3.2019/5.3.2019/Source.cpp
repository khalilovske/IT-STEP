//# include <iostream>
//# include <ctime>
//
//using namespace std;

//void Fill(int *const arr, int const size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = rand() % 10;
//	}
//}
//
//void Print(int *const arr, int const size) {
//	cout << " arr address " << arr << endl;
//	for (int i = 0; i < size; i++) {
//		cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
//	}
//}
//
//void Push(int *&arr, int size) {
//	int elem = 0;
//	cout << "Enter new element " << endl;
//	cin >> elem;
//	int *tmpArr = new int[size + 1];
//	cout << "rmpArr address = " << tmpArr << endl;
//	for (int i = 0; i < size; i++) {
//		tmpArr[i] = arr[i];
//	}
//	tmpArr[size] = elem;
//
//	delete[]arr;
//	arr = tmpArr;
//}

//////int main() {
//////	srand(unsigned(time(NULL)));
	//===============Block1====================>
	/*int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = new int[size];
	for (int i = 0; i < size; i++) {
	arr[i] = rand() % 10;
	cout << "Arr [" << i << "]= " << arr[i] << "\t" << " Address = " << arr + i << endl;
	}
	delete[] arr;*/
	//===============Block1====================>
	//===============Block2====================>
	/*int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = new int[size];
	cout << " arr address " << arr << endl;
	Fill(arr, size);
	Print(arr, size);
	delete[]arr;*/
	//===============Block2====================>
	//===============Block3====================>
	/*int size = 5;
	int *arr1 = new int[size];
	int *arr2 = new int[size];

	Fill(arr1, size);
	Fill(arr2, size);
	cout << "=========Arr1=============" << endl;
	Print(arr1, size);
	cout << "=========Arr2=============" << endl;
	Print(arr2, size);

	delete[] arr1;
	arr1 = new int[size];

	for (int i = 0; i < size; i++) {
	arr1[i] = arr2[i];
	}

	cout << "=========Arr1====After=========" << endl;
	Print(arr1, size);
	cout << "=========Arr2====After=========" << endl;
	Print(arr2, size);

	delete[] arr1;
	delete[] arr2;*/
	//===============Block3====================>
	//===============Block4====================>
	/*int size = 0;
	cout << "Enter arr size: " << endl;
	cin >> size;
	int *arr = new int[size];
	Fill(arr, size);
	Print(arr, size);*/
	//===============Block4====================>




//---------------------------------------------------TASK -------------------------------------------
/*Написати функції для роботи з динамічним одновимірним масивом: 
Функція створення динамічного масиву вказаного розміру і його заповнення випадковими числами.
Виводу масиву 
Доповнення масиву одним елементом в кінець масиву. 
Доповнення масиву одним елементом в початокмасиву.    
Видалення елемента за вказаною позицією. 
Вставка нового елемента у довільну допустиму позицію у масиві 
Меню */

# include <iostream>
# include <ctime>
using namespace std;


void Fill(int *const arr, int const size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
	}
}

void Print(int *const arr, int const size) {
	for (int i = 0; i < size; i++) {
		cout << "arr [" << i << "]=" << arr[i] << endl;
	}
}

void FuncMenu(int Menu, int size, int *arr);
void Push(int *&arr, int size);
void Insert(int *&arr, int size);


int main()
{
	int size = 0;
	int *arr = new int[size];
	int Menu = 0;

	cout << "Enter arr size : " << endl;
	cin >> size;

	cout << "----------------------------------->" << endl;

	cout << "Print matrix on Screen : 1" << endl;
	cout << "Add a Number to the End of the matrix : 2 " << endl;
	cout << "Add a Number to the Begining of the matrix : 3 " << endl;
	cout << "Delete a Number According to the Entered Address : 4 " << endl;
	cout << "Fill the Matrix by zeros : 5 " << endl;
	cout << "----------------------------------->" << endl;

	FuncMenu(Menu,size,arr);

	delete[] arr;

	system("pause");
	return 0;
}

void FuncMenu(int Menu,int size, int *arr)
{
	cout << "Enter your Number of Operation you want : " << endl;
	cin >> Menu;
	if (Menu == 1)
	{
		Fill(arr, size);
		Print(arr, size);
		FuncMenu(Menu, size, arr);
	}
	else if (Menu == 2)
	{
		Fill(arr, size);
		Print(arr, size);
		Push(*&arr, size );
		Print(arr, size );
		FuncMenu(Menu, size, arr);
	}
	else if (Menu == 3)
	{
		Fill(arr, size);
		Print(arr, size);
		Insert(*&arr, size );
		Print(arr, size );
		FuncMenu(Menu, size, arr);
	}
	else if (Menu == 4)
	{
		Fill(arr, size);
		Print(arr, size);
		FuncMenu(Menu, size, arr);
	}
	else if (Menu == 5)
	{
		arr[size] = {};
		Print(arr, size);
		FuncMenu(Menu, size, arr);
	}
	else
	{
		cout << "Enter only the Numbers that are shown above !! " << endl;
		FuncMenu(Menu, size, arr);
	}
}

void Push(int *&arr, int size) {
		int elem = 0;
		cout << "Enter new element " << endl;
		cin >> elem;
		int *tmpArr = new int[size + 1];
		cout << "rmpArr address = " << tmpArr << endl;
		for (int i = 0; i < size; i++) {
			tmpArr[i] = arr[i];
		}
		tmpArr[size] = elem;
		delete[]arr;
		arr = tmpArr;
}

void Insert(int *&arr, int size) {
	int elem = 0;
	cout << "Enter new element " << endl;
	cin >> elem;
	int *tmpArr = new int[size + 1];
	cout << "rmpArr address = " << tmpArr << endl;
	for (int i = -1; i < size; i++) {
		tmpArr[i] = arr[i];
	}
	tmpArr[size] = elem;
	delete[]arr;
	arr = tmpArr;
}

