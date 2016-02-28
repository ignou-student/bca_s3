/*
	Name: FirstN_Naturals_while.cpp
	Author: Vishnu
	Date: 28-02-16 14:48
	Description: Let user input a number and display natural numbers till that number.
				 Using while loop.
*/
#include<iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "Enter Limit"<<endl;
	cin >> n;
	int i = 1;
	cout<<"First "<<n<<" natural numbers are: "<< endl;
	while(i<=n){
		cout<<i<<endl;
		i++;
	}
	return 0;
}

