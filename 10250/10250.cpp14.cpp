#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int testCase; cin >> testCase;
	while( testCase-- ) {
		int h, w, n; cin >> h >> w >> n;
		
		int wi, hi;
		for(wi = 1; wi <= w; wi++) {
			for(hi = 1; hi <= h; hi++) {
				n--;
				if( n < 1 ) break;
			}	
			if( n < 1 ) break;
		}
		cout << hi;
		if( wi < 10 ) cout << 0;
		cout << wi << endl;
	}
}