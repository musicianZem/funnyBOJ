#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main() {
	int N; cin >> N;
	for(int i=1; i<=N; i++) {
		for(int space = N-i; space > 0; space--) {
			cout << " ";
		}
		for(int star = 0; star < i; star++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}