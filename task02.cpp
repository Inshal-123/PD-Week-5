#include<iostream>
#include<cmath>
using namespace std;
	float pyramidVolume(float a,float b, float c, string unit);
main(){
	float a,b,c;
 	string unit;
	cout<< "Enter the length of the pyramid (in meters): ";
	cin>> a;
	cout<< "Enter the width of the pyramid (in meters): ";
	cin>> b;
	cout<< "Enter the height of the pyramid (in meters): ";
	cin>> c;
	cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin >> unit;
	cout <<"The volume of the pyramid is: "<<pyramidVolume(a, b, c, unit)<<" cubic "<< unit;
}
float pyramidVolume(float a, float b, float c,string unit){
	float volume;
	float cubic;
	volume = (a*b*c)/3;
	if( unit == "millimeters"){
	cubic =volume*(pow(10,9));}
	if(unit == "centimeters"){
	cubic =volume*(pow(10,6));} 
	if (unit == "meters"){
	cubic = volume;}
	if (unit == "kilometers"){
	cubic = volume/(pow(10,9));}
return cubic;
}
	