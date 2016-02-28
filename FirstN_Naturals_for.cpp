/*
	Name: FirstN_Naturals.cpp
	Author: Vishnu
	Date: 28-02-16 14:44
	Description: Let user input a number and display natural numbers till that number.
				 Using for loop.
*/
#include<iostream>

using namespace std;

int main() {
	int n = 0;
	cout << "Enter Limit"<<endl;
	cin >> n;
	cout<<"First "<<n<<" natural numbers are: "<< endl;
	for(int i = 1; i<=n; i++){
		cout<<i<<endl;
	}
	return 0;
}

