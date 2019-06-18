#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

string s[1001];
int carr[1001][1001];

int getMin( int a, int b ) {
	if( a > b ) return b;
	else return a;
}

int main() {
	int N, M; cin >> N >> M;
	for(int i=0; i<N; i++) {
		cin >> s[i];
	}

	int ms = 0;

	for(int i=0; i<N; i++) {
		if( s[i][0] == '1' ) { 
			carr[i][0] = 1;
			if( ms < carr[i][0] ) ms = carr[i][0];
		}
	}
	for(int j=0; j<M; j++) {
		if( s[N-1][j] == '1' ) {
			carr[N-1][j] = 1;
			if( ms < carr[N-1][j] ) ms = carr[N-1][j];
		}
	}

	for(int i=N-2; i>=0; i--) {
		for(int j=1; j<M; j++) {
			if( s[i][j] == '1' ) {
				int a = 999999999, b = 999999999, c = 999999999;

				a = carr[i+1][ j ];

				if( j != 0 ) {
					b = carr[ i ][j-1];
					c = carr[i+1][j-1];
				}

				carr[i][j] = (getMin(a, getMin(b, c))) + 1;

				if( ms < carr[i][j] )
					ms = carr[i][j];

			} else {
				carr[i][j] = 0;
			}
		}
	}
	cout << ms * ms ;
}