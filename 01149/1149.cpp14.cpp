#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int cache[1001][3];

int main() {
    int N; scanf("%d", &N);
    for(int i=0; i<N; i++) for(int j=0; j<3; j++) scanf("%d", &cache[i][j]);
    for(int i=1; i<N; i++) {
        cache[i][0] += min(cache[i-1][1], cache[i-1][2]);
        cache[i][1] += min(cache[i-1][2], cache[i-1][0]);
        cache[i][2] += min(cache[i-1][0], cache[i-1][1]);
    }
    cout << min(cache[N-1][0], min(cache[N-1][1], cache[N-1][2]));
}