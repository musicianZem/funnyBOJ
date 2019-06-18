#include <iostream>
using namespace std;
int main() {
	char a;
	int count = 0;
	for(int i=0; i<8; i++) {
		for(int j=0; j<8; j++) {
			cin >> a;
			if( a == 'F' && (i+j)%2 == 0) {
				count++;
			}
		}
	}
	cout << count << endl;

	return 0;
}