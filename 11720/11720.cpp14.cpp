#include <iostream>
#include <string>
using namespace std;

int main() {
	int testCase; cin >> testCase;
	string numbers; cin >> numbers;

	int sum = 0;
	for(int i=0; i<testCase; i++) {
		sum += numbers[i] - '0';
	}

	cout << sum << endl;
}