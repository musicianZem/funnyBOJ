#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int alp[26];
int main() {
	int N; cin >> N;
	if( N%400 == 0 ) {
		cout << "1";
	} else if( N % 100 == 0 ) {
		cout << "0";
	} else if( N % 4 == 0 ) {
		cout << "1";
	} else {
		cout << "0";
	}
}