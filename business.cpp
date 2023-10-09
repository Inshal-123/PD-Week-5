#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
	void printHeader();
	int menu();
int main()
{	
	int option;
while (true)
{
	printHeader();
	int option = menu () ;
	if (option == 1)
	{
	cout << "Corolla Altis 1800cc automatic.\n";
	cout << "Model 2023\n";
	cout << "Milage 12 to 14 kmpl \n";
	cout << " It has a 1.8 litre four-cylinder base engine which produces 138 horsepower @ 6,100 rpm and 173 Nm of torque.\n";
	cout << "Price = PKR 7,799,000 \n";
	cout << endl;
	}
	if (option == 2)
	{
	cout << "Corolla Crown 1800cc automatic.\n";
	cout << "Model 2022\n";
	cout << "Milage 14 kmpl \n";
	cout << " The hybrid powertrain produces a combined output of 223 horsepower and 221 Nm of torque.\n";
	cout << "Price = PKR - 18,500,000\n";
	cout << endl;
	}
	if (option == 3)
	{
	cout << "Corolla Fortuner Diesel engine is 2755 cc while the Petrol engine is 2694 cc automatic.\n";
	cout << "Model 2023\n";
	cout << "Milage 10 kmpl \n";
	cout << " The 2694 cc Petrol engine generates a power of 163.60bhp@5200rpm and a torque of 245Nm@4000rpm. The 2755 cc Diesel engine generates a power of 201.15bhp@3000-3400rpm and a torque of 500Nm@1600-2800rpm.\n";
	cout << "Price = PKR 21,000,000\n";
	cout << endl;
	}
	if (option == 4)
	{
	cout << "Corolla Land Crusier  Diesel engine is 3346cc automatic.\n";
	cout << "Model 2020\n";
	cout << "Milage 10 kmpl \n";
	cout << " The Toyota Land Cruiser comes with a 5.7-liter V8 engine that produces 381 horsepower and 401 lb-ft of torque.\n";
	cout << "Price = PKR 73,000,000 \n";
	cout << endl;
	}
	if (option == 5)
	{
	return 0;
	}
	cout<< "Press any KEY "<< endl;
	getch();
}
	cout<< endl;			
}
void printHeader()
{
	cout<<"*************************************************************************************\n";
	cout<<"*    ###### ##   ## ##   ##      ##    ##   ###   ######   ###     ######   ####    *\n";
	cout<<"*      ##   ##   ## ##   ##      ###  ### ##   ##   ##   ##   ##   ##   ## ##       *\n";
	cout<<"*      ##   ####### #######      ## ## ## ##   ##   ##   ##   ##   ######   ###     *\n";
	cout<<"*      ##   ##   ## ##   ##      ##    ## ##   ##   ##   ##   ##   ## ##      ##    *\n";
	cout<<"*    ###### ##   ## ##   ##      ##    ##   ###     ##     ###     ##  ##  ####     *\n";
	cout<<"*************************************************************************************\n";
	cout << endl << endl;
}
int menu()
{
	int option;
	cout<<"Choose one of the following options number to get information...\n";
	cout<<"1. Enter option 1 for TOYOTA ALTIS                              \n";
	cout<<"2. Enter option 2 for TOYOTA CROWN                             \n";
	cout<<"3. Enter option 3 for TOYOTA FORTUNER                             \n";
	cout<<"4. Enter option 4 for TOYOTA LAND CRUISER                             \n";
	cout<<"5. Exit \n";
	cout << "Enter your option: ";
	cin >> option;
	cout<< "Your Option.."<<option;
	
	return option;
}
