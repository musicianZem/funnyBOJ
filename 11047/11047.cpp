#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;
int main() {
	int N, K; cin >> N >> K;
	stack<int> money;
	for( int i = 0; i < N; i++ ) {
		int n; cin >> n;
		money.push( n );
	}

	int count = 0;
	while( !money.empty() ) {
		int m = money.top(); money.pop();
		count += (K/m);
		K%=m;
		if( K == 0 ) break;
	}
	cout << count << endl;
	return 0;
}