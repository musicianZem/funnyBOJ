#include <iostream>
#include <vector>

using namespace std;

class Node {
    public :
        bool visited = false;
        vector<int> adjust;

    public :
        Node() {
        }
};

Node nodes[1001];

bool dfs(int i) {
    if( nodes[i].visited ) return 0;
    nodes[i].visited = true;

    for(auto &adj : nodes[i].adjust) {
        dfs( adj );
    }   

    return true;
}

int getConnectedCount(int N) {
    int connectedCount = 0;
    for(int i=1; i<=N; i++) {
        connectedCount += dfs(i);
    }   

    return connectedCount;
}

int main() {
    int N, M; cin >> N >> M;

    for(int i=0; i<M; i++) {
        int u, v; cin >> u >> v;
        nodes[u].adjust.push_back(v);
        nodes[v].adjust.push_back(u);
    }   

    cout << getConnectedCount(N) << endl;
}
