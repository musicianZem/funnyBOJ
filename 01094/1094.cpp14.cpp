#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

int arr[] = {64, 32, 16, 8, 4, 2, 1};
const int arrSize = 7;

int main() {
	int x; scanf("%d", &x);
	int count = 0, paste = 0;
	while( paste != x ) {
		for(int i=0; i<arrSize; i++) {
			if( arr[i] + paste <= x ) {
				paste += arr[i]; count++; break;
			}
		}
	}

	cout << count;
}