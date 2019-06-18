#include <iostream>
using namespace std;

int houseLived[16][16];
int houseCache[16][16];

int main() {
	int testCase; cin >> testCase;
	
	for (int i = 1; i < 16; i++) {
		houseLived[0][i] = i;
		houseCache[0][i] = houseCache[0][i - 1] + houseLived[0][i];
	}

	for (int i = 1; i < 16; i++) {
		for (int j = 1; j < 16; j++) {
			houseLived[i][j] = houseCache[i - 1][j];
			houseCache[i][j] = houseCache[i][j - 1] + houseLived[i][j];
		}
	}

	while (testCase--) {
		int k, n; cin >> k >> n;
		cout << houseLived[k][n] << endl;
	}
}