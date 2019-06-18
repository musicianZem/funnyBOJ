#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int myCompare1( const void *a, const void *b ) {
	return *(int*)a - *(int*)b;
}
int myCompare2( const void *a, const void *b ) {
	return *(int*)b - *(int*)a;
}
int main() {
	int N; cin >> N;
	int *arr1 = new int[N];
	int *arr2 = new int[N];
	for(int i=0; i<N; i++) { cin >> arr1[i]; }
	for(int i=0; i<N; i++) { cin >> arr2[i]; }
	
	qsort( arr1, N, sizeof(int), myCompare1 );
	qsort( arr2, N, sizeof(int), myCompare2 );

	int sum = 0;
	for(int i=0; i<N; i++) {
		sum += arr1[i]*arr2[i];
	}
	cout << sum ;
    return 0;
}