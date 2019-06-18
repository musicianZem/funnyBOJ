#include <iostream>
#include <algorithm>
using namespace std;

int n, s;
int arr[20];
int countSum = 0;

int main() {
	cin >> n >> s;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int module = (1 << n) - 1;
	
	while( module > 0 ) {
		int copyModule = module;
		int i = 0, arrSum = 0;
		while( copyModule > 0 ) {
			if( copyModule % 2 ) {
				arrSum+= arr[i];
			}
			i++;
			copyModule /= 2;
		}
		if( arrSum == s ) countSum++;
		module--;
	}
	cout << countSum << endl;
}