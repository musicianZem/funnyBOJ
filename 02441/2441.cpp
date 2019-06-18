#include <iostream>
#include <string>
using namespace std;
int main() {
	int N; cin >> N;
	string a;
	for(int i=0; i<N; i++) { a.push_back('*'); }
	for(int i=0; i<N; i++) {
		cout << a << endl;
		a[i] = ' ';
	}
	cout << a << endl;
	return 0;
}