#include<iostream>
using namespace std;
	void projectTimeCalculation(int hours, int days, int workers);
main()
{
	int hours,days,workers;
	cout<<"Enter the needed hours: ";
	cin>> hours;
	cout<< "Enter the days that the firm has: ";
	cin>> days;
	cout<<"Enter the number of all workers: ";
	cin>> workers;
	projectTimeCalculation(hours, days, workers);
}
	void projectTimeCalculation(int hours, int days, int workers)
{
	int totalHours = (0.9 * days *  workers * 10);
	if(totalHours<hours)
	{cout<<"Not enough time! "<<hours-totalHours<<" hours needed.";}
	else
	{
	cout<< "Yes!"<<totalHours-hours<<" hours left.";}
}
	
	