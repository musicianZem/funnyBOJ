#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int testCase; scanf("%d", &testCase);
	while( testCase -- ) {
		int x, y; scanf("%d %d", &x, &y);
		long long int totalDistance = y - x;
		long long int index = 1;

		int plusValue = 1;
		bool tryPlus = false;
		int count = 0;
		while( index <= totalDistance ) {
			count++;
			index += plusValue;
			if( tryPlus ) {
				tryPlus = false;
				plusValue++;
			} else {
				tryPlus = true;
			}
		}

		cout << count << endl;
	}
}