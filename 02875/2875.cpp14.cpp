#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <deque>
#include <stack>
using namespace std;

int main() {
	int n, m, k; scanf("%d %d %d", &n, &m, &k);
	int teamCount;
	if (n > (m << 1)) {
		teamCount = m;

	}
	else {
		teamCount = n >> 1;
	}
	n -= (teamCount + teamCount);
	m -= teamCount;

	int npm = n + m;
	while (k > npm) {
		npm += 3;
		teamCount--;
	}

	cout << teamCount << endl;
}