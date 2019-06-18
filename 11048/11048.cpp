#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
int MIRO[1001][1001];
int MAXS[1001][1001];
int main() {
	int N, M; scanf("%d %d", &N, &M);
	memset(MIRO, 0, sizeof(MIRO));
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			scanf("%d", &MIRO[i][j]);
			MAXS[i][j] = MIRO[i][j];
		}
	}

	for(int i=1; i<=N; i++) {
		for(int j=1; j<=M; j++) {
			if( i == 1 && j == 1 ) {
				MAXS[i][j] = MIRO[i][j];
			} else if( i == 1 ) {
				MAXS[i][j] = MAXS[i][j-1] + MIRO[i][j];
			} else if( j == 1 ) {
				MAXS[i][j] = MAXS[i-1][j]+ MIRO[i][j];
			} else {
				if( MAXS[i-1][j] > MAXS[i][j-1] ) {
					MAXS[i][j] = MAXS[i-1][j] + MIRO[i][j];
				} else {
					MAXS[i][j] = MAXS[i][j-1] + MIRO[i][j];
				}
			}
		}
	}

	cout << MAXS[N][M] << endl;

	return 0;
}