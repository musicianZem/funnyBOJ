#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int cache[102][102];
map<int, int> houses;

void setCacheMeemory(int X, int Y) {
	// static memory is initialized 0 automatically.
	// memset(cache, 0, sizeof(cache));

	for (int i = 1; i <= X; i++) {
		cache[i][0] = cache[i][Y + 1] = -1;
	}
	for (int j = 1; j <= Y; j++) {
		cache[0][j] = cache[X + 1][j] = -1;
	}
}

void fillAreaByCount(int i, int j, int value) {
	cache[i][j] = value;
	houses[value] += 1;
	if (cache[i + 1][j] == 0) fillAreaByCount(i + 1, j, value);
	if (cache[i - 1][j] == 0) fillAreaByCount(i - 1, j, value);
	if (cache[i][j + 1] == 0) fillAreaByCount(i, j + 1, value);
	if (cache[i][j - 1] == 0) fillAreaByCount(i, j - 1, value);
}

void getAreaCount(int n, int m) {
	static int returnCount = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (cache[i][j] == 0) {
				fillAreaByCount(i, j, ++returnCount);
			}
		}
	}
}

int main() {
	int n, m, testCase; cin >> n >> m >> testCase;
	setCacheMeemory(n, m);
	while (testCase--) {
		int underX, underY, upperX, upperY;
		cin >> underY >> underX >> upperY >> upperX;
		for (int i = underX + 1; i <= upperX; i++) {
			for (int j = underY + 1; j <= upperY; j++) {
				cache[i][j] = -1;
			}
		}
	}

	getAreaCount(n, m);
	
	vector<int> helloWorld;
	for (map<int, int>::iterator it = houses.begin(); it != houses.end(); it++) {
		helloWorld.push_back(it->second);
	}
	sort(helloWorld.begin(), helloWorld.end());
	cout << helloWorld.size() << endl;
	for (int i = 0; i < helloWorld.size(); i++) {
		cout << helloWorld[i] << " ";
	}
}