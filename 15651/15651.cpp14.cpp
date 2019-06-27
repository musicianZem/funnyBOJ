#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <numeric>

using namespace std;

void dfs(int n, int m) {
    static vector<int> result;

    if( m == 0 ) {
        for(vector<int>::iterator it = result.begin(); it != result.end(); it++) {
            printf("%d ", *it);
        }
        printf("\n");
        return;
    }
    
    for(int i=1; i<=n; i++) {
        result.push_back(i);
        dfs(n, m-1);
        result.pop_back();
    }
}

int main() {
    int N, M; 
    scanf("%d %d", &N, &M);
    dfs(N, M);
}
