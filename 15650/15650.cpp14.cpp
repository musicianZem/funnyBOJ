#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <numeric>

using namespace std;

bool isUsed[10];

void printSelected(int n) {
    for(int i=1; i<=n; i++) {
        if( isUsed[i] ) cout << i << " ";
    }
    cout << endl;
}

void dfs(int endIdx, int n, int m) {
    if( m == 0 ) {
        printSelected(n);
        return;
    }
    
    for(int i=endIdx+1; i<=n; i++) {
        if( !isUsed[i] ) {
            isUsed[i] = true;
            dfs(i, n, m-1);
            isUsed[i] = false;
        }
    }
}

int main() {
    int N, M; cin >> N >> M;
    dfs(0, N, M);
}
