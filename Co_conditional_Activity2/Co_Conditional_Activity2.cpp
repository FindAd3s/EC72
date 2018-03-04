#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char** argv) {
	
	float salary, mallowance,hallowance,takehome;
	cout<<"Enter Salary: ";
	cin>>salary;
	
	if(salary>=50000)
	{
		mallowance = (40.0/100 *salary);
		hallowance = (30.0/100*salary);
		takehome = salary-(mallowance+hallowance);
		cout<<"\nMedical Allowance: P"<<mallowance;
		cout<<"\nHouse Allowance: P"<<hallowance;
		cout<<"\nTake Home Pay: P"<<takehome;
	}
	
	else
	{
		mallowance = (30.0/100 *salary);
		hallowance = (20.0/100*salary);
		takehome = salary-(mallowance+hallowance);
		cout<<"\nMedical Allowance: P"<<mallowance;
		cout<<"\nHouse Allowance: P"<<hallowance;
		cout<<"\nTake Home Pay: P"<<takehome;
	}
	return 0;
}
