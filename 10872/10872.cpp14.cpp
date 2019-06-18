#include <stdio.h>
#include <iostream>
long long int factorial( int N ) {
	int i;
	long long int result = 1;
	for(int i=2; i<=N; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int N;
	scanf("%d", &N);
	std :: cout << factorial( N );
}