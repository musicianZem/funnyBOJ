#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;

	if( a > b ) {
		if( a > c ) {
			if( b > c ) {
				cout << b << endl;
			} else {
				cout << c << endl;
			}
		} else {
			cout << a << endl;
		}
	} else {
		if( b > c ) {
			if( a > c ) {
				cout << a << endl;
			} else {
				cout << c << endl;
			}
		} else {
			cout << b << endl;
		}
	}
}