//#include<iostream>
//#include<ctime>
//#include<string>
//using namespace std;

/*struct Real_Estate {
	string type;
	int Room_Number;
	int Floor;
	float Square;
	string Heating;
	string Description;
	void ShowInfo() {
		cout << "Type = " << type << "\n" << "Room Number = " << Room_Number <<
			"\n" << "Floor = " << Floor << "\n" << "Square = " << Square  << "\n" << "Heating = " << Heating <<  "\n" <<
			"Description = " << Description << endl;
	}
	void Set_Description(string Desc) {
		Description = Desc;
	}
};*/

//struct address {
//
//};
//
//struct Person {
//private:
//	string Name;
//	string Sure_Name;
//	int Age;
//public:
//	void ShowInfo() {
//		cout << " Name : " << Name << "\nSure name :" << Sure_Name << "\n Age :" << Age << endl;
//	}
//	void Set_Age(int newAge) {
//		if (newAge >= 100 || newAge <= 0) {
//			cout << "Incorrect age " << endl;
//		}
//		else {
//			Age = newAge;
//		}
//	}
//	int Get_Age() {
//		return Age;
//	}
//	void Set_Name(string newName) {
//		Name = newName;
//	}
//	void Set_SureName(string newSureName) {
//		Sure_Name = newSureName;
//	}
//};
//
//int main()
//{
	/*Real_Estate MegaFlat;
	MegaFlat.type = " flat ";
	MegaFlat.Room_Number = 4;
	MegaFlat.Floor = 13;
	MegaFlat.Square = 150.0 ;
	MegaFlat.Heating = "Gas";*/
	//MegaFlat.Description = "The price to be negotiated ";
	//MegaFlat.ShowInfo();
	//string Desc;
	//cin >> Desc;
	//MegaFlat.Set_Description(Desc);
	//MegaFlat.ShowInfo();

	//Person Bill;
	//Bill.Name = "Bill";
	//Bill.Sure_Name = "Gates ";
	//Bill.Age = 50;
	//Bill.Set_Name("Bill");
	//Bill.Set_SureName("Ga");

	//Bill.Set_Age(60);
	//Bill.ShowInfo();
	////cout << Bill.Get_Age() << endl;;


//	system("pause");
//	return 0;
//}




//================================================= Example =========================================

/*#include <iostream>
#include <string>

using namespace std;


struct Address {
	string country;
	string region;
	string city;
	string street;
	int zipCode;
	void ShowAddressInfo() {
		cout << "Country: " << country << "\nRegion: " << region << "\nCity: " <<
			city << "\nStreet: " << street << "\nZipCode: " << zipCode << endl;
	}
};

struct Person {
private:
	string name;
	string surname;
	int age;
public:
	void ShowPersonInfo() {
		cout << "Name: " << name << "\nSurname: " << surname << "\nAge: " << age << endl;
	}
	void SetAge(int newAge) {
		if (newAge >= 120 || newAge <= 0) {
			cout << "Incorrect age!" << endl;
		}
		else {
			age = newAge;
		}
	}
	int GetAge() {
		return age;
	}
	void SetName(string newName) {
		name = newName;
	}
	void SetSurname(string newSurname) {
		surname = newSurname;
	}
	Address address;
};


int main() {

	Person Bill;
	//Bill.name = "Bill";
	//Bill.surname = "Gates";
	//Bill.age = 155;
	Bill.SetName("Bill");
	Bill.SetSurname("Gates");
	Bill.SetAge(57);
	Bill.ShowPersonInfo();
	Bill.address.country = "USA";
	Bill.address.region = "CA";
	Bill.address.city = "LA";
	Bill.address.street = "S. Banderu";
	Bill.address.zipCode = 45678;
	Bill.address.ShowAddressInfo();
	//cout << Bill.GetAge() << endl;
	cout << "===============================================>>>>>" << endl;
	Person Stive;
	Stive.SetName("Stive");
	Stive.SetSurname("Balmor");
	Stive.SetAge(53);
	Stive.ShowPersonInfo();
	Stive.address.country = "USA";
	Stive.address.region = "CA";
	Stive.address.city = "SF";
	Stive.address.street = "R. Shuhevucha";
	Stive.address.zipCode = 345435;
	Stive.address.ShowAddressInfo();



	system("pause");
	return 0;
}*/


//================================================= Task =========================================
/*Створити структуру, яка описує тварину (назва, клас, кличка).
Створити функції для роботи з цією структурою (заповнення об’єкта, 
	вивід на екран даних про об’єкт, функція «подати голос»).  */

#include <iostream>
#include <string>

using namespace std;

struct Animal {
	string Name;
	string Class;
	string Alias;

	void ShowInfo() {
		cout << "Name " << Name << "\nClass : " << Class << "\nAlias : " << Alias << endl;
	}

	void SetName(string newName) {
		Name = newName;
	}

	void SetClass(string newClass) {
		Class = newClass;
	}
void SetAlias(string newAlias) {
	Alias = newAlias;
	}
};


int main() {

	Animal ELDORADO;
	ELDORADO.Name = "	ELDORADO ";
	ELDORADO.Class = "fish";
	ELDORADO.Alias = "DORAD";
	ELDORADO.ShowInfo();


system("pause");
return 0;
}