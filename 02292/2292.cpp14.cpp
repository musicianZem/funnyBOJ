#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int n; cin >> n;
	int maxHouse = 1;
	int plusCount = 1;
	int plusValue = 6;
	while (maxHouse < n) {
		plusCount++;
		maxHouse += plusValue;
		plusValue += 6;
	}
	cout << plusCount << endl;
}