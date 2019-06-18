#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
class NoWeightGraph {
private:
	int					size;
	vector< set<int> >	adjacents;
	vector<   bool   >	isVisited;

	void initVisited(bool value) {
		for (int i = 0; i < size; i++) {
			isVisited[i] = value;
		}
	}

	void printDFS(int curNode) {
		if (isVisited[curNode]) return;
		isVisited[curNode] = true;
		cout << (curNode + 1) << " ";
		for (set<int>::iterator it = adjacents[curNode].begin(); it != adjacents[curNode].end(); it++) {
			printDFS(*it);
		}
	}

	void printBFS(int startNode) {
		queue<int> bfs_reservation;
		bfs_reservation.push(startNode);
		isVisited[startNode] = true;

		while (!bfs_reservation.empty()) {
			int nextVisit = bfs_reservation.front();
			bfs_reservation.pop();

			cout << (nextVisit + 1) << " ";

			for (set<int>::iterator it = adjacents[nextVisit].begin(); it != adjacents[nextVisit].end(); it++) {
				if (!isVisited[*it]) {
					isVisited[*it] = true;
					bfs_reservation.push(*it);
				}
			}
		}
	}

	void setConnected(int curNode) {
		if (isVisited[curNode]) return;
		isVisited[curNode] = true;
		for (set<int>::iterator it = adjacents[curNode].begin(); it != adjacents[curNode].end(); it++) {
			setConnected(*it);
		}
	}
public:
	NoWeightGraph(int size) {
		this->size = size;
		adjacents.resize(size);
		isVisited.resize(size);
	}

	void addEdge(int p, int q) {
		adjacents[p].insert(q);
		adjacents[q].insert(p);
	}

	void DFS(int startNode) {
		initVisited(false);
		printDFS(startNode);
		cout << endl;
	}

	void BFS(int startNode) {
		initVisited(false);
		printBFS(startNode);
		cout << endl;
	}

	int getConnectCount(int startNode) {
		initVisited(false);
		setConnected(startNode);
		
		int count = 0;
		for (int i = 0; i < size; i++) {
			if (isVisited[i]) count++;
		}
		return count;
	}
};
const int INTMAX = 999999999;
int minDist[100][100];
void myFloyd(int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			for (int k = 0; k < size; k++) {
				if (minDist[j][i] + minDist[i][k] < minDist[j][k]) {
					minDist[j][k] = minDist[j][i] + minDist[i][k];
				}
			}
		}
	}
}
int main() {
	int n; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> minDist[i][j];
			if (!minDist[i][j]) minDist[i][j] = INTMAX;
		}
	}
	myFloyd(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << (minDist[i][j] != INTMAX) << " ";
		} cout << endl;
	}
}