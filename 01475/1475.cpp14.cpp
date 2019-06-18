#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
using namespace std;

map<char, int> charmap;
char alp[10];
int main() {
	
	string n; cin >> n;
	for(int i=0; i<n.length(); i++) {
		charmap[ n[i] ] += 1;
	}
	
	int sixnine = 0;
	int max = 0;
	for(map<char,int>::iterator it = charmap.begin(); it != charmap.end(); it++) {
	
		
		
		if( it->first == '6' || it->first == '9' ) {
			sixnine += it->second;
		} else if( max < it->second ) {
			max = it->second;
		}
	}
	int evenFlag = sixnine % 2;
	
	sixnine /= 2;	
	
	int result;
	if( max > sixnine ) {
		result = max;	
	} else {
		if( evenFlag == 1 ) {
			result = sixnine + 1;
		} else {
			result = sixnine;
		}
	}
	
	cout << result ;
}