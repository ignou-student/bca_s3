/*
	Name: MatrixOps.cpp
	Author: Vishnu
	Date: 28-02-16 15:53
	Description: Matrix Operations ( I took the red pill \m/, ;-) )
*/

#include<iostream>

using namespace std;

int main() {
	int choice = 0, add = 0, multiply = 1;
	cout<< "Choose Operation: \n0: Add\t1: Multiply ";
	cin>> choice;
	int x =3, y = 2, out[x][y];
	int m1[x][y], m2[y][x];
	if(choice==0)
		m1[x][y], m2[x][y];
//	else if(choice==1)
//		int m1[x][y], m2[y][x];
	cout << "Enter the elements of matrices: "<<endl;
	for(int i = 0; i<x; i++){
		for(int j = 0; j<y; j++){
			cout << "m1("<<i<<", "<<j<<"): ";
			cin>> m1[i][j];
			cout<<endl;
			cout << "m2("<<i<<", "<<j<<"): ";
			cin>> m2[i][j];
			cout<<endl;			
		}
	}
	
	cout << "Enter the elements of matrices: "<<endl;
	for(int i = 0; i<x; i++){
		for(int j = 0; j<y; j++){
			if(choice == add)	{
				out[i][j] = m1[i][j]+m2[i][j];
			}else if(choice == multiply){
				out[i][j] = m1[i][j]*m2[j][i];
			}
		}
	}
	
	cout<<"Output array is: "<<endl;
		for(int i = 0; i<x; i++){
			for(int j = 0; j<y; j++){
				cout<< out[i][j]<<"\t";
			}
				cout<< endl;
		}

	return 0;
}

