#include <iostream>
#include <set>
#include <vector>
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
};

int main() {
	int N, M, V; cin >> N >> M >> V;

	NoWeightGraph graph(N);

	for (int i = 0; i < M; i++) {
		int P, Q; cin >> P >> Q;
		graph.addEdge(P - 1, Q - 1);
	}

	graph.DFS(V - 1);
	graph.BFS(V - 1);
    
    return 0;
}