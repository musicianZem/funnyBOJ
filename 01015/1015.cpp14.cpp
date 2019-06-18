#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int A[50], B[50], ACopy[50], P[50];

int intCompare( const void *p1, const void *p2 ) {
	if( *(int*)p1 > *(int*)p2 ) return 1;
	else return -1;
}
int main() {
	int N; scanf("%d", &N);
	for(int i=0; i<N; i++) {
		scanf("%d", &A[i]);
		B[ i ] = A[ i ];
	}
	qsort(B, N, sizeof(int), intCompare);

	for(int i=0; i<N; i++) { // A Search
		for(int j=0; j<N; j++) { // B Search
			if( B[ j ] == A[ i ] ) {
				P[ i ] = j;
				B[ j ] = -1;
				break;
			}
		}
	}

	for(int i=0; i<N; i++) {
		cout << P[i] << " ";
	} cout << endl;
}