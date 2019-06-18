#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <deque>
#include <stack>
#include <cmath>
#include <fstream>
using namespace std;

const int PROBLEM_MOD = 10007;
int tile[1001][2];

int main() {
	int N; cin >> N;
	tile[1][0] = 1;
	tile[2][0] = 1;
	tile[2][1] = 2;
	for (int i = 3; i <= N; i++) {
		tile[i][0] = tile[i - 1][0] + tile[i - 1][1];
		tile[i][1] = (tile[i - 2][0] + tile[i - 2][1]) << 1;
		tile[i][0] %= PROBLEM_MOD;
		tile[i][1] %= PROBLEM_MOD;
	}

	cout << (tile[N][0] + tile[N][1]) % PROBLEM_MOD << endl;
}