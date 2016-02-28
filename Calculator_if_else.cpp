/*
	Name: Calculator_switch.cpp
	Author: Vishnu
	Date: 28-02-16 15:01
	Description: Implement a 2 variable calculator using if_else_if ladder
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
	if(op == 0) {
		cout<<a << " + " <<b<<" = "<<a+b<<endl;
	} else if(op == 1) {
		cout<<a << " - " <<b<<" = "<<a-b<<endl;
	} else if (op == 2) {
		cout<<a << " x " <<b<<" = "<<a*b<<endl;
	} else if(op==3) {
		cout<<a << " / " <<b<<" = "<<a/b<<endl;
	} else
		cout<<"Invalid Choice"<<endl;
	return 0;
}

