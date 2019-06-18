#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int gcd(int m,int n) {
	while(m!=n)
		if(m>n) m=m-n;
		else
			n=n-m;
	return m;
}
int lcm(int m,int n) {
	return m*n/gcd(m,n);
}
int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a,b) << endl << lcm(a, b) << endl;
	return 0;
}