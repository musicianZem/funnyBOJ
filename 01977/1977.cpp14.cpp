#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <stack>
#include <iterator>
using namespace std;

int main() {
	vector<int> jegop;
	for (int i = 1; i <= 100; i++) {
		jegop.push_back(i*i);
	}

	int n, m; cin >> n >> m;
	bool plusFlag = false;
	int minValue = 0;
	int jegopSum = 0;
	for (vector<int>::iterator it = jegop.begin(); it != jegop.end(); it++) {
		if (plusFlag) {
			if (*it > m) break;
			jegopSum += *it;
		}
		else {
			if (*it >= n) {
				if (*it > m) break;
				minValue = *it;
				jegopSum += *it;
				plusFlag = true;
			}
		}
	}
	if (jegopSum == 0) {
		cout << -1;
	}
	else
		cout << jegopSum << endl << minValue << endl;
}