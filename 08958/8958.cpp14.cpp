#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int N; cin >> N;
	while( N-- ) {
		string str; cin >> str;
		int sum = 0;
		int flag = 1;
		int strLength = str.length();

		for(int i=0; i<strLength; i++) {
			if( str[i] == 'O' ) {
				sum += flag;
				flag++;
			} else {
				flag = 1;
			}
		}
		cout << sum << endl;
	}
}