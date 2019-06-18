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

int sticker[2][100001];

int main() {
	int testCase; scanf("%d", &testCase);
	while (testCase--) {
		int N; scanf("%d", &N);
		for (int i = 0; i < 2; i++) {
			for (int j = 1; j <= N; j++) {
				scanf("%d", &sticker[i][j]);
			}
		}
		for (int i = 2; i <= N; i++) {
			sticker[0][i] += max(sticker[1][i - 2], max(sticker[0][i - 2], sticker[1][i - 1]));
			sticker[1][i] += max(sticker[0][i - 2], max(sticker[1][i - 2], sticker[0][i - 1]));
		}

		cout << max(max(sticker[0][N], sticker[1][N]), max(sticker[0][N - 1], sticker[1][N - 1])) << endl;
	}
}