#include <iostream>
#include <string>
using namespace std;
int main()
{	string Name;
	int Salary;
	int Sale;
	float percent;
	cout << "Enter Name   : ";
	cin >> Name;
	cout << "Enter Salary : ";
	cin >> Salary;
	cout << "Enter Sale   : ";
	cin >> Sale;
	cout << "Enter Percent: ";
	cin >> percent ;
	percent = percent / 100 ;
	cout << "Your name    = " << Name << endl;
	cout << "Total Revenue " << (Sale*percent)+Salary << endl;
	return(0);
}