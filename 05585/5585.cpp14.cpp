#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <deque>
#include <stack>
using namespace std;

int charge[] = { 500, 100, 50, 10, 5, 1 };
int chargeCount;

int main() {
	int N; scanf("%d", &N);
	N = 1000 - N;
	int i = 0;
	while (N > 0) {
		if (N / charge[i]) {
			chargeCount += (N / charge[i]);
		}
		N %= charge[i++];
	}
	cout << chargeCount << endl;
}