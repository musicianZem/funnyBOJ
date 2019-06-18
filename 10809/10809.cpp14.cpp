#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int alp[26];
int main() {
	memset(alp, -1, sizeof(alp));
	string str; cin >> str;
	for(int i=0; i<str.length(); i++) {
		if( alp[ str[i] - 'a' ] == -1 ) {
			alp[ str[i] - 'a' ] = i;
		}
	}
	for(int i=0; i<26; i++) {
		cout << alp[i] << " " ;
	}
}