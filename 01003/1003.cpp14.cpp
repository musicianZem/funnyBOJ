#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
using namespace std;

class fibCall {
public :
	int call0, call1;
	fibCall(int c0 = 0, int c1 = 0) {
		call0 = c0;
		call1 = c1; 
	}
	
	friend fibCall operator +(fibCall f1, fibCall f2) {
		return fibCall(f1.call0 + f2.call0, f1.call1 + f2.call1);
	}

	friend bool operator != (fibCall &f, const int n) {
		return f.call0 != 0 && f.call1 != 0;
	}
};

fibCall f[41];

fibCall fib(int n) {
	if (f[n] != 0) {
		return f[n];
	}
	if (n == 0) {
		f[n].call0 = 1;
		f[n].call1 = 0;
		return f[n];
	}
	if (n == 1) {
		f[n].call0 = 0;
		f[n].call1 = 1;
		return f[n];
	}
	f[n] = fib(n - 1) + fib(n - 2);
	return f[n];
}

int main() {
	fib(40);
	int testCase; cin >> testCase;

	while (testCase--) {
		int n; cin >> n;
		cout << f[n].call0 << " " << f[n].call1 << endl;
	}
}