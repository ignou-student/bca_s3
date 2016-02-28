/*
	Name: Bubble Sort Array
	Author: Vishnu
	Date: 28-02-16 15:07
	Description: Bubble sort a given array
*/

#include<iostream>

using namespace std;

void displayArray(int[]);

int main() {
	int a[10]= {1,2,5,8,6,9,4,7,3,0};
	cout<<"Unsorted array is:"<<endl;
	displayArray(a);
	for(int i = 0; i<10; i++) {
		for(int j = 0; j<9; j++) {
			int cur_element = a[j];
			int next_element = a[j+1];
			if(cur_element>next_element) {	// if wrong, swap
				a[j] = next_element;
				a[j+1] = cur_element;
			}
		}
	}
	cout<<"Sorted array is:"<<endl;
	displayArray(a);
	return 0;
}

void displayArray(int array[]) {
	cout<<"{"<<array[0];
	for(int i=1; i<10; i++) {
		cout<< ", "<<array[i];
	}
	cout<<"}"<<endl;

}

