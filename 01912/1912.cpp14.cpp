#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <stack>
#include <iterator>
using namespace std;

int cache[100000];
const int MINVALUE = -1001;
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cache[i];
	}

	int maxSum = MINVALUE;
	int localSum = 0;
	for (int i = 0; i < N; i++) {
		localSum += cache[i];
		maxSum = max(localSum, maxSum);

		if (localSum < 0) localSum = 0;
	}

	cout << maxSum << endl;
}