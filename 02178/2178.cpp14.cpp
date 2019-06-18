#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

bool miro[102][102];

int n, m;

class Index {
public:
	int i, j, moveCount;
	Index(int i = 0, int j = 0, int moveCount = 0) : i(i), j(j), moveCount(moveCount){}
};

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string temp; cin >> temp;
		for (int j = 0; j < m; j++) {
			miro[i][j + 1] = (temp[j] == '1');
		}
	}
	queue<Index> way;
	way.push(Index(1, 1, 1));

	int checker = n + m;
	while (!way.empty()) {
		int i = way.front().i;
		int j = way.front().j;
		int moveCount = way.front().moveCount;
		way.pop();
		if (checker - i - j == 1) {
			checker = moveCount + 1; break;
		}
		if (miro[i][j + 1]) { miro[i][j + 1] = 0; way.push(Index(i, j + 1, moveCount + 1)); }
		if (miro[i + 1][j]) { miro[i + 1][j] = 0; way.push(Index(i + 1, j, moveCount + 1)); }
		if (miro[i][j - 1]) { miro[i][j - 1] = 0; way.push(Index(i, j - 1, moveCount + 1)); }
		if (miro[i - 1][j]) { miro[i - 1][j] = 0; way.push(Index(i - 1, j, moveCount + 1)); }
	}
	cout << checker << endl;
}