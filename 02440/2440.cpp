#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++) {
		for(int k=n-i; k>0; k--) cout << "*";
		cout << endl;
	}
	return 0;
}