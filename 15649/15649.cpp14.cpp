#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <numeric>

using namespace std;

bool isUsed[9];

void dfs(vector<int> &result, int n, int m) {
    if( m == 0 ) { 
        for(vector<int>::iterator it = result.begin(); it != result.end(); it++) {
            printf("%d ", *it);
        }   
        printf("\n");
        return;
    }   

    for(int i=1; i<=n; i++) {
        if( !isUsed[i] ) { 
            isUsed[i] = true;
            result.push_back( i );

            dfs( result, n, m-1 );

            result.pop_back();
            isUsed[i] = false;
        }   
    }   
}

int main() {
    int N, M; scanf("%d %d", &N, &M);
    vector<int> printVector;
    dfs(printVector, N, M); 
}
