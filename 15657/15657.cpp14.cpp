#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int arr[10];
vector<int> result;

void dfs(int n, int m, int beforeI = 0) {
    
    if( m == 0 ) {
        for(vector<int>::iterator it = result.begin(); it != result.end(); it++)
            printf("%d ", *it);

        printf("\n");
        return;
    }

    for(int i=beforeI; i<n; i++) {
        result.push_back(arr[i]);
        dfs(n, m-1, i);
        result.pop_back();
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
}
