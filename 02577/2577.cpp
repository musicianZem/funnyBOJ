#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
	int a, b, c; cin >> a >> b >> c;

	int al = a*b*c;
	int arr[10];
	memset(arr, 0, sizeof(arr));
	while( al > 0 ) {
		arr[ al%10 ] ++;
		al /= 10;
	}
	for(int i=0; i<10; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}
