#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

typedef struct Edge {
    int u, v, weight;
    Edge() { u = -1; v = -1; weight = 0; }
    Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}
    friend bool operator <(const Edge& e1, const Edge& e2) {
        return e1.weight < e2.weight;
    }
};

Edge edge[100000];
int cache[1000];

int findConnect(int a) {
    if (cache[a] < 0) 
        return a; // false
    else 
        return cache[a] = findConnect(cache[a]);
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int from, to, weight;
        cin >> from >> to >> weight;
        edge[i] = Edge(from-1, to-1, weight);
        //cin >> edge[i].u >> edge[i].v >> edge[i].weight;
    }
    sort(edge, edge + M);

    int result = 0;
    int count = 0;
    fill_n(cache, N, -1);

    int i = 0;
    while (true) {
        int from = edge[i].u;
        int to = edge[i].v;
        int left = findConnect(from);
        int right = findConnect(to);

        if (left != right) {
            cache[right] = left;
            result += edge[i].weight;
            count++;

            if (count == N - 1) break;
        }
        i++;
    }
    cout << result << endl;
}