#include<iostream>
#include<ctime>
//========= Block 2 =========
//
//#define week 7    // there is NO (;) 
//#define space "\t"
//#define sum(a,b)((a)+(b))
//========= Block 2 =========

//#define DEBUG 
//#define prod 2

//#define NUM(a,b,c)   (((a) > (b) && (b) > (c)) ? (a) : ((b) > (c)) ? (b) : (c)) // task 1
using namespace std;
//========= Block 1 =========

/*union Test {
	short a;
	int b;
	double c;
};*/
//========= Block 1 =========

//int main()
//{
	//========= Block 1 =========
	/*Test UN;
	UN.a = 49;
	UN.b = 200;
	UN.c = 404;*/
	//========= Block 1 =========




	//========= Block 2 =========
	/*cout <<  week << endl;
	cout << "some text" << space << "some text " << endl;
	cout << sum(5,15) << endl;*/
	//========= Block 2 =========
	

	//========= Block 3 =========

//#ifdef DEBUG 
//	cout << "Start loop " << endl;
//
//	for (int i = 0; i < 5; i++) {
//		cout << i << endl;
//	}
//#ifdef DEBUG 
//	cout << "End loop " << endl;
//#endif

//#else
//cout << " loop not started  " << endl;
//#endif
	//========= Block 3 =========


	//========= Block 4 =========
//#if prod == 1 
//	cout << "stable " << endl;
//#elif prod == 2
//	cout << "test " << endl;
//#else
//	cout << "else " << endl;
//#endif
	//========= Block 4 =========

//	system("pause");
//	return 0;
//}

//============================== TASK 1 =========================
/*Написати макрос (макро-функцію), який знаходить та повертає максимальне з трьох переданих йому чисел  
int main(){
	cout << NUM(5,154,22) << endl;
	system("pause");
	return 0;
}*/

//============================== TASK 2 =========================
//#define SUM(a,b,c) ((a)*(b)*(c))  // task 2
//Написати макрос (макро-функцію), який обчислює та виводить на екран суму квадратів двох переданих чисел  
//int main()
//{
//	cout << SUM(3, 3, 3) << endl;
//	system("pause");
//	return 0;
//}

//============================== TASK 2 =========================
/*Написати програму, яка знаходить суму елементів масиву. Розмір масиву є константою, яка оголошена на рівні препроцесора  
*/
int main()
{
	#define SUM(arr[i])(size) (arr[i]+=arr[i])  // task 3

	srand(unsigned(time(0)));
	const int size = 5;
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10;
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}