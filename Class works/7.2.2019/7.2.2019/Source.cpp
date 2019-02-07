/*#include<iostream>
#include<ctime>

using namespace std;
//void Func(int counter);
int Func(int counter);
//int counter = 0;

int main()
{
	
	//Func(10);
	Func(5);

	system("pause");
	return 0;
}
/*void Func(int counter) {
	counter--;

	cout << "func = " << counter << endl;
	if (counter > 0)
	{
		Func(counter);
	}
	
}*/
/*int Func(int counter) {
	if (counter < 0) {
		return 0;
	}
	cout << "counter =" << counter << endl;
	counter--;
	return Func(counter);
}*/

//--------------------------------------------TASK 1-------------------------
//Написати функцію, яка рекурсивно обчислює суму чисел в переданому діапазоні  

/*#include<iostream>
using namespace std;
int Sum(int a, int b, int sum);

int main()
{
	int a = 0, b = 0, sum = 0;
	cout << "Enter two Numbers : " << endl;
	cin >> a >> b;
	cout << "Sum = " << Sum(a, b, sum) << endl;;

	system("pause");
	return 0;
}

int Sum(int a,int b, int sum)
{
	if (a == b) {

		return sum;
	}
	return Sum(a + 1 ,b, sum + a);
}
*/

//Написати програму для виводу на екран чисел Фібоначчі: (1,1,2,3,5,8... xn = xn-1 + xn-2), менших заданого числа Q.  
#include<iostream>
using namespace std;
int i = 0, j = 0;
int Func(int i,int j);

int number = 0;
int main()
{
	
	cout << "Enter your Number : " << endl;
	cin >> number;
	Func(i, j);
    cout<<"--------------"<< i << j <<endl;
	system("pause");
	return 0;
}
int Func(int i,int j) {
	i = 1;
	number += i;

	return 	Func(i, j);
}