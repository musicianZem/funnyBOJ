#include <iostream>
#define MAXLENGTH 90
using namespace std;

long long FibArr[MAXLENGTH];

void calf( long long arr[], int i ) {
	arr[i] = arr[i-1] + arr[i-2];
}

int main() {
	FibArr[0] = 0;
	FibArr[1] = 1;

	int n; cin >> n;
	int index = 2;

	while( index <= n ) {
		calf( FibArr, index );
		index++;
	}

	cout << FibArr[ n ];
}