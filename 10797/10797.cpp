#include <iostream>
#include <string>
using namespace std;
int main() {
	int N; cin >> N;
	int sum = 0;
	for(int i=0; i<5; i++) {
		int a; cin >> a;
		if( a%10 == N ) sum++;
	}
	cout << sum;
	return 0;
}