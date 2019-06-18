#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

int alphaCount[26];

int main() {
	string str;
	getline(cin, str);
	int strL = str.length();

	for(int i=0; i<strL; i++) {
		char cur = str[i];

		if( cur < 'a' ) {
			cur -= 'A' - 'a';
		}
		alphaCount[ cur - 'a' ] ++;
	}

	int max = 0;
	char bestAlpha;

	for(int i=0; i<26; i++) {
		if( max < alphaCount[i] ) {

			max = alphaCount[i];
			bestAlpha = (char)( i + 'A' );

		} else if( max == alphaCount[i] ) {
			bestAlpha = '?';
		}
	}

	cout << bestAlpha;

}