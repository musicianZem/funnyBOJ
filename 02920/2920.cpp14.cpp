#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int arr[8];
	for(int i=0; i<8; i++) {
		cin >> arr[i];
	}

	int asc = 0; // 1 ascending 0 descending -1 mixed
	if( arr[0] < arr[1] ) {
		asc = 1;
	}

	for(int i=0; i<7; i++) {
		if( asc == 1 ) {
			if( arr[i] >= arr[i+1] ) {
				asc = -1;break;
			}
		} else {
			if( arr[i] <= arr[i+1] ) {
				asc = -1;break;
			}
		}
	}
	if( asc == 1 ) {
		cout << "ascending";
	} else if( asc == 0 ) {
		cout << "descending";
	} else {
		cout << "mixed";
	}
}