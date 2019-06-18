#include <iostream>
using namespace std;
int main() {
	int a, b; cin >> a >> b;
	int bs[3];
	bs[0] = b/100;
	bs[1] = (b/10)-(bs[0]*10);
	bs[2] = b%10;
	
	for(int i=2; i>=0; i--) cout << a*bs[i] << endl;
	cout << a*b;
	return 0;
}