#include <iostream>
#include <vector>
using namespace std;
int main() {
	while( 1 ) {
		int n; cin >> n; if( n==0 ) break;

		vector<int> arr;
		int newint; cin >> newint;
		arr.push_back( newint );
		for(int i=1; i<n; i++) {
			cin >> newint;
			if( arr[ arr.size()-1 ] != newint ) arr.push_back( newint );
		}

		for(int i=0; i<arr.size(); i++) cout << arr[i] << " ";
		cout << "$\n";
	}
	return 0;
}