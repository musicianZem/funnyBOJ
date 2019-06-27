#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <numeric>

using namespace std;

void dfs(int beforeIdx, int n, int m) {
    static vector<int> result;

    if( m == 0 ) {
        for(auto &i : result) cout << i << " ";
        cout << endl;
        return;
    }
    
    for(int i=beforeIdx; i<=n; i++) {
        result.push_back(i);
        dfs(i, n, m-1);
        result.pop_back();
    }
}

int main() {
    int N, M; cin >> N >> M;
    dfs(1, N, M);
}
