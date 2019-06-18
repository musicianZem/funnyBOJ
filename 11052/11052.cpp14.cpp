#include <iostream>
#include <cstdio>
using namespace std;

int N;
int setMenu[ 1000 ];
int bestValue[ 1000 ];
int main() {
	scanf("%d", &N);
	for(int i=0; i<N; i++) {
		scanf("%d", &setMenu[i]);
	}
	bestValue[ 0 ] = setMenu[ 0 ];
	for(int i=1; i<N; i++) {
		int ibestMenu = setMenu[ i ];
		for(int k=0; k<=i; k++) {
			
			int selectMenu = bestValue[ k ] + bestValue[ i-k-1 ];
			if( ibestMenu < selectMenu ) ibestMenu = selectMenu;
		}
		bestValue[ i ] = ibestMenu;
	}

	cout << bestValue[ N-1 ] << endl;
}
/*
    4   9   15
*/