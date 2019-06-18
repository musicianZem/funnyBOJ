#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int b3=0, b5=0;
	while( N > 0 ) {
		if( (N%5) == 0 ) {
			b5 = N / 5;
			break;
		} else {
			b3++;
			N -= 3;
		}
	}
	if( N < 0 ) {
		cout << -1 << endl;
	} else {
		cout << b3 + b5 << endl;
	}
}