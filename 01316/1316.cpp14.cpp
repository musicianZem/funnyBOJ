#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <map>
using namespace std;

map<char, int> heyhey;
int main() {
	
	int testCase; scanf("%d", &testCase);
	int GroupWordCount = 0;
	while( testCase -- ) {
		heyhey.clear();

		string r; cin >> r;
		int rl = r.length();
		char before = '-';
		bool fakeWord = false;
		for(int i=0; i<rl; i++) {
			if( r[i] == before ) {
				heyhey[ r[i] ] += 1;
			} else {
				heyhey[ r[i] ] += 1;
				before = r[i];
				if( heyhey[ r [i] ] != 1 ) {
					fakeWord = true;
					break;
				}
			}
		}

		if( !fakeWord ) GroupWordCount ++;
	}

	cout << GroupWordCount << endl;
}