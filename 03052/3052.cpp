#include <iostream>
#include <set>
using namespace std;
int main() {
	set<int> hi;
	int N = 10;
	while( N-- ) {
		int n; cin >> n;
		hi.insert( n%42 );
	}
	cout << hi.size() << endl;

	return 0;
}