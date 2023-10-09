#include<iostream>
using namespace std;
	float taxCalculator(char type, float price);
main()
{
	char type;
	float price;
	cout<<"Enter the vechicle type code (M, E, S, V, T): ";
	cin>> type;
	cout<< "Enter the price of vechicle: $";
	cin >> price;
	cout<< "The final price of a vechicle of type "<<type<<" after adding the tax is $" <<taxCalculator(type, price)<<".";
}
	float taxCalculator(char type, float price){
	float taxAmount;
	float finalPrice;
	if( type == 'M'){
	finalPrice = price +(price*6/100);}
	if( type == 'E'){
	finalPrice = price + (price*8/100);}
	if( type == 'S'){
	finalPrice = price +(price*10/100);}
	if( type == 'V'){
	finalPrice = price + (price*12/100);}
	if( type == 'T'){
	finalPrice = price + (price*15/100);}
return finalPrice;
}
	