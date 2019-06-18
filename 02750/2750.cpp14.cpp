#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int intCompare( const void *p1, const void *p2 ) {
	if( *(int*)p1 > *(int*)p2 ) return 1;
	else return -1;
}
int arr[1001];
int main() {
	int N; cin >> N;
	for(int i=0; i<N; i++) {
		cin >> arr[i];
	}
	qsort(arr, N, sizeof(int), intCompare);
	for(int i=0; i<N; i++) {
		cout << arr[i] << endl;
	}
}