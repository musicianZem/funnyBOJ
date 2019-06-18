#include <iostream>
#include <string>
using namespace std;
int main() {
	int N, L; cin >> N >> L;
	string a[10];
	for(int i=0; i<N; i++) {
		cin >> a[i];
	}
	for(int i=0; i<N; i++) {
		for(int j=L-1; j>=0; j--) {
			cout << a[i][j];
		}cout<<endl;
	}
	return 0;
}