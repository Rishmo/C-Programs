#include<iostream>

using namespace std;

int main()
{
	int age=10;
	cout << "Age is: "<< age << endl;
	
	double rate_of_interest {0.07};
	cout << "Rate of interest is: " << rate_of_interest << endl;
	
	auto myVar = 9.7;
	cout << "Type of myVar: " << typeid(myVar).name() << endl;
	
	auto myIntVar = 9.7;
	cout << "Type of myIntVar: " << typeid(myIntVar).name() << endl;
	
	return 0;
}
