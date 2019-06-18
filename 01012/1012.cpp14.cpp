#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
int M, N, Bat[52][52], K;

void makeClean( int x, int y ) {
	Bat[x][y] = 0;
	if( Bat[x-1][ y ] ) makeClean( x-1,  y  );
	if( Bat[x+1][ y ] ) makeClean( x+1,  y  );
	if( Bat[ x ][y-1] ) makeClean(  x , y-1 );
	if( Bat[ x ][y+1] ) makeClean(  x , y+1 );
}

int main() {
	int testCase; scanf("%d", &testCase);
	while( testCase -- ) {
		scanf("%d %d %d", &M, &N, &K);
		for(int i=0; i<K; i++) {
			int x, y; scanf("%d %d", &x, &y);
			Bat[x+1][y+1] = 1;
		}

		int swormCount = 0;
		for(int i=1; i<=M; i++) {
			for(int j=1; j<=N; j++) {
				if( Bat[i][j] ) {
					swormCount++;
					makeClean(i, j);
				}
			}
		}

		cout << swormCount << endl;
	}
}