#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <deque>
#include <stack>
using namespace std;

int drink[10001];
int cache[10001][3];

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &drink[i]);
	} // end of input;

	cache[1][1] = drink[1]; // 1 is single
	cache[1][2] = drink[1]; // 1 is double
	cache[2][0] = drink[1]; // 2 no drink
	cache[2][1] = drink[2]; // 2 is first
	cache[2][2] = drink[1] + drink[2]; // 2 is second

	for (int i = 2; i <= n; i++) {
		cache[i][0] = max(cache[i - 1][0], max(cache[i - 1][1], cache[i - 1][2]));
		cache[i][1] = cache[i - 1][0] + drink[i];
		cache[i][2] = cache[i - 1][1] + drink[i];
	}

	cout << max(cache[n][0], max(cache[n][1], cache[n][2])) << endl;
}