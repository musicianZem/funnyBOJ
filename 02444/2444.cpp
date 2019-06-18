#include <iostream>
#include <string>
using namespace std;
int main() {
	int N; cin >> N;
	for(int i=0; i<N; i++) {
		for(int j=i+1; j<N; j++) {
			cout << " ";
		}
		for(int j=0; j<(i*2)+1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for(int i=N-2; i>=0; i--) {
		for(int j=i+1; j<N; j++) {
			cout << " ";
		}
		for(int j=0; j<(i*2)+1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	/*
	4 vs 1;
	3 vs 3;
	2 vs 5;
	1 vs 7;
	0 vs 9;
	*/
	return 0;
}