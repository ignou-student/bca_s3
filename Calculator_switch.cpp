/*
	Name: Calculator_switch.cpp
	Author: Vishnu
	Date: 28-02-16 14:50
	Description: Implement a 2 variable calculator using switch...case
*/

#include<iostream>

using namespace std;

int main() {
	int a,b,op = 0;
	cout<<"Enter the first variable"<<endl;
	cin>>a;
	cout<<"Enter the second variable"<<endl;
	cin>>b;
	cout<<"Enter the operator option"<<endl<<"  0:Addition    1:Subtraction  \n  2:Multiplication    3:Division"<<endl;
	cin>>op;
	switch(op) {
		case 0:
			cout<<a << " + " <<b<<" = "<<a+b<<endl;
			break;
		case 1:
			cout<<a << " - " <<b<<" = "<<a-b<<endl;
			break;
		case 2:
			cout<<a << " x " <<b<<" = "<<a*b<<endl;
			break;
		case 3:
			cout<<a << " / " <<b<<" = "<<a/b<<endl;
			break;
		default:
			cout<<"Invalid Choice"<<endl;
	}
	return 0;
}

