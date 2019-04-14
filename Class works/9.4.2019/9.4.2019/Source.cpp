#include<iostream>
#include "Sum.h"
#include"Person.h"
using namespace std;

int main() {

	cout << Sum(4,3) << endl;
	cout << Multiplication(3, 5) << endl;
	cout << ".................................." << endl;

	Person bill;
	bill.name = "bill";
	bill.surename = "gate";
	bill.age = 55;
	bill.ShowPerson();
	system("pause");
	return 0;
}