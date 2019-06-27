#include <iostream>
#include <fstream>
#include <algorithm>
#include <queue>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <numeric>
#include <set>

using namespace std;

set<int> intSet;
set<int> isUsed;

void dfs(int n, int m) {
    static vector<int> result;

    if( m == 0 ) {
        for(vector<int>::iterator it = result.begin(); it != result.end(); it++) {
            printf("%d ", *it);
        }
        printf("\n");
        return;
    }

    for(set<int>::iterator it = intSet.begin(); it != intSet.end(); it++) {
        set<int>::iterator used = isUsed.find(*it);
        if( used == isUsed.end() ) {
            isUsed.insert(*it);
            result.push_back(*it);
            dfs(n, m-1);
            result.pop_back();
            used = isUsed.find(*it);
            isUsed.erase(used);
        }
    }

}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) {
        int t; scanf("%d", &t);
        intSet.insert(t);
    }

    dfs(N, M);
}
