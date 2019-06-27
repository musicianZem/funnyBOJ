#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int arr[10];
bool isUsed[10];

void dfs(int n, int m, int beforeIdx = -1) {
    
    if( m == 0 ) {
        for(int i=0; i<n; i++) {
            if(isUsed[i]) {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
        return;
    }

    for(int i=beforeIdx+1; i<n; i++) {
        if( !isUsed[i] ) {
            isUsed[i] = true;
            dfs(n, m-1, i);
            isUsed[i] = false;
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
}
