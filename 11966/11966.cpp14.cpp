#include <iostream>
using namespace std;
int main() {
	int n; cin >> n;
	int start = 1;
	while (start > 0) {
		if (start == n) break;
		else start *= 2;
	}
	if (start > 0) cout << 1;
	else cout << 0;
}
