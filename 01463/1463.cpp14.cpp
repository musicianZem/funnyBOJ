#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[ 1000001 ];

int calc( int n ) {
	if( n == 1 ) return 0;
	if( dp[ n ] != -1 ) return dp[ n ];

	int p3 = 999999, p2 = 999999, m1 = 999999;

	if( n % 3 == 0 ) {
		p3 = calc( n/3 ) + 1;
	}
	if( n % 2 == 0 ) {
		p2 = calc( n/2 ) + 1;
	}
	m1 = calc( n - 1 ) + 1;

	int minimum;
	if( p3 < p2 ) {
		if( p3 < m1 ) 
			minimum = p3;
		else 
			minimum = m1;
	} else {
		if( p2 < m1 ) 
			minimum = p2;
		else
			minimum = m1;
	}
	
	dp[ n ] = minimum;
	return minimum;
}

int main() {
	int N; cin >> N;
	for(int i=0; i<=N; i++) dp[i] = -1;
	cout << calc(N);
}