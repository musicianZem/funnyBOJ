#include <iostream>
using namespace std;
void swap( int &a, int &b ) {
	int c = a;
	a = b;
	b = c;
}
int main() {
	int a[5];
	for(int i=0; i<5; i++) cin >> a[i];
	while( !(a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4 && a[4] == 5) ) {
		for(int i=0; i<4; i++) {
			if( a[i] > a[i+1] ) {
				swap( a[i], a[i+1] );
				for(int k=0; k<4; k++) cout << a[k] << " ";
				cout << a[4] << endl ;
			}
		}
	}
}