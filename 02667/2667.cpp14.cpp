#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool house[27][27];
int localLevel = 0;

void dfs(int i, int j) {
	house[i][j] = 0;
	localLevel++;
	if (house[i][j + 1]) dfs(i, j + 1);
	if (house[i][j - 1]) dfs(i, j - 1);
	if (house[i + 1][j]) dfs(i + 1, j);
	if (house[i - 1][j]) dfs(i - 1, j);
}

int main() {
	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		string temp; cin >> temp;
		for (int j = 0; j < N; j++) {
			house[i][j + 1] = (temp[j] == '1');
		}
	} // end of input. set house.

	vector<int> houseCount;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (house[i][j]) {
				dfs(i, j);
				houseCount.push_back(localLevel);
				localLevel = 0;
			}
		}
	}

	sort(houseCount.begin(), houseCount.end());
	cout << houseCount.size() << endl;
	for (vector<int>::iterator it = houseCount.begin(); it != houseCount.end(); it++) {
		cout << *it << endl;
	}
}