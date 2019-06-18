#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <map>
using namespace std;

map<char, int> heyhey;
int main() {
	
	string a, b; cin >> a >> b;
	int al = a.length();
	int bl = b.length();

	int ab = 0;
	if( al == bl ) {
		for(int i=al-1; i>=0; i--) {
			if( a[i] > b[i] ) {
				ab = 1; break;
			} else if( a[i] < b[i] ) {
				ab = -1; break;
			}
		}
	} else if( al > bl ) {
		ab = 1;
	} else {
		ab = -1;
	}

	if( ab == 1 ) {
		for(int i=al-1; i>=0; i--) {
			cout << a[i] ;
		}
	} else {
		for(int i=bl-1; i>=0; i--) {
			cout << b[i] ;
		}
	}
}