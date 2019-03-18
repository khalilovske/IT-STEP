/*C++
Написати функції для роботи з динамічною матрицею:
Функція створення динамічної матриці розміром row x col, де row та col
Функція заповнення матриці
Функція виводу матриці
Функція доповнення матриці новим рядком
Функція видалення з матриці рядка за вказаним номером
Функція вставки нового рядка за вказаним номером
Функція доповнення матриці новим стовпчиком
Функція видалення з матриці стовпця за вказаним номером
Функція вставки нового стовпця за вказаним номером */

# include <iostream>
# include <ctime>

using namespace std;


int cols = 0;
int rows = 0;

void Fill(int **const arr, int rows, int cols) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void Print(int **const arr, int rows, int cols) {

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "-------------------------------------" << endl;

}

void Delete(int**&arr, int rows, int cols) {
	int Number = 0;
	cout << "Enter the Number of Row you want to be deleted :" << endl;
	cin >> Number;

	cout << "-------------------------------------" << endl;
	for (int i = 0; i < rows; i++) {
		if (i == Number) {
			delete[]arr[i];
		}
	}
	Print(arr, rows - 1, cols);
	delete[]arr;
	system("pause");

}


void Push(int**&arr, int rows, int cols)
{
	cout << "\t\t Added a New Row" << endl;
	int s = 1;
	int **tmpArr = new int*[rows + 1];
	for (int i = 0; i < rows + 1; i++)
		tmpArr[i] = new int[cols];

	for (int i = 0; i < cols; i++)
	{
		tmpArr[0][i] = rand() % 20;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			tmpArr[s][j] = arr[i][j];
		}
		s++;
	}

	for (int i = 0; i < rows; i++)
		delete[]arr[i];
	delete[]arr;
	arr = tmpArr;

}

/*void AddLine(int**&arr, int rows, int cols) {
	cout << "\t\t Added a New Line" << endl;
	int s = 1;
	int **tmpArr = new int*[cols + 1];
	for (int i = 0; i < cols + 1; i++)
		tmpArr[i] = new int[rows];

	for (int i = 0; i < rows + 1; i++)
	{
		tmpArr[i][0] = rand() % 20;
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols + 1; j++)
		{
			tmpArr[s][j] = arr[i][j];
		}
		s++;
	}

	Print(arr, rows, cols + 1);


	for (int i = 0; i < cols; i++)
		delete[]arr[i];

	delete[]arr;
	arr = tmpArr;
	system("pause");

}
*/





int main() {
	srand(unsigned(time(NULL)));

	cout << "Enter Rows: " << endl;
	cin >> rows;
	cout << "Enter Cols: " << endl;
	cin >> cols;
	cout << "-------------------------------------" << endl;

	int **arr = new int *[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	Fill(arr, rows, cols);
	Print(arr, rows, cols);
	//Push(arr,rows,cols);
	//Print(arr, rows +1 , cols);
	//Delete(arr, rows, cols);
	//Print(arr, rows, cols);
	AddLine(arr, rows, cols);




	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}


	delete[]arr;

	system("pause");
	return 0;
}