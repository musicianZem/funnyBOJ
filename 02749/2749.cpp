#include <iostream>
#include <vector>
using namespace std;

vector<long long> fibs;
vector<long long> check;

int main() {
	long long n; cin >> n;
	n++;
	fibs.push_back( 0 );
	fibs.push_back( 1 );

	int checkPoint = -1;
	for(long long i=2; i<=n; i++) {
		int newF = fibs[i-2] + fibs[i-1];
		fibs.push_back( newF % 1000000 );

		if( checkPoint != -1 ) {
			if( checkPoint * 2 == i ) {
				break;
			}
			if( fibs[i] != fibs[ i - checkPoint ] ) {
				checkPoint = -1;
			}
		}

		if( newF % 1000000 == 0 && checkPoint == -1 )
			checkPoint = i;
	}
	if( checkPoint == -1 ) {
		cout << fibs[n-1];
	} else {
		n %= checkPoint;
		cout << fibs[n-1];
	}
}