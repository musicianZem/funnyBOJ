#include <stdio.h>
#include <iostream>

using namespace std;

int board[1001][1001];
int cache[1001][1001];

int main() {
    while ( true ) {
        int N, M; scanf("%d %d", &N, &M);
        if( N==0 && M==0 ) break;

        for(int i=1; i<=N; i++) {
            for(int j=1; j<=M; j++) {
                scanf("%d", &board[i][j]);
                cache[i][j] = board[i][j];
            }
        }

        int max_square_size = 0;

        for(int i=1; i<=N; i++) {
            for(int j=1; j<=M; j++) {
                if( cache[i][j] ) {
                    cache[i][j] += min(cache[i-1][j-1], min(cache[i][j-1], cache[i-1][j]));
                    max_square_size = max(cache[i][j], max_square_size);
                }
            }
        }

        cout << max_square_size << endl;
    }
}
