#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int arr[10];
bool isUsed[10];
set<vector<int>> result;

void dfs(int n, int m, int beforeIdx = -1) {
    static vector<int> dfsStack;

    if( m == 0 ) {
        result.insert(dfsStack);
        return;
    }

    for(int i=0; i<n; i++) {
        if( !isUsed[i] ) {
        dfsStack.push_back(arr[i]);
        isUsed[i] = true;
        dfs(n, m-1, i);
        isUsed[i] = false;
        dfsStack.pop_back (      );
        }
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr+N);

    dfs(N, M);

    for(set<vector<int>>::iterator it = result.begin(); it != result.end(); it++) {
        for(vector<int>::const_iterator pit = it->begin(); pit != it->end(); pit++) {
            printf("%d ", *pit);
        }
        printf("\n");
    }
}
