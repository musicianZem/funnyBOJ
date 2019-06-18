#include <iostream>
#include <cstdio>
using namespace std;

int ARR[300][300];
int main() {
	int N, M; scanf("%d %d", &N, &M);
	for(int i=0; i<N; i++) {
		for(int j=0; j<M; j++) {
			scanf("%d", &ARR[i][j]);
		}
	}
	int sumCount; scanf("%d", &sumCount);
	while( sumCount-- ) {
		int si, sj, ei, ej;
		scanf("%d %d %d %d", &si, &sj, &ei, &ej);

		int sum = 0;
		for(int i=si-1; i<ei; i++) {
			for(int j=sj-1; j<ej; j++) {
				sum += ARR[i][j];
			}
		}
		cout << sum << endl;
	}
	
	return 0;
}