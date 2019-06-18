#include <cstdio>
#include <cstring>
#include <vector>
int parents[1000001];
int findTop_makeRank1( int point ) {
	std::vector<int> tempVector;
	while( parents[point] != point ) {
		tempVector.push_back( point );
		point = parents[point];
	}
	for(std::vector<int>::iterator it = tempVector.begin(); it != tempVector.end(); it++) {
		parents[*it] = point;
	}
	return point;
}
int findTop( int point ) {
	while( parents[point] != point )
		point = parents[point];
	return point;
}
void checkSame( int a, int b ) {
	if( a == b ) 
		printf("YES\n");
	else {
		int aTop = findTop(a);
		int bTop = findTop(b);
		if( aTop == bTop ) 
			printf("YES\n");
		else 
			printf("NO\n");
	}
}
int main() {
	int N, M; scanf("%d %d", &N, &M);
	for(int i=0; i<=N; i++) parents[i] = i;

	int op, a, b;
	while( M-- ) {
		//for(int i=0; i<=N; i++) printf("parents[%d]=%d\n", i, parents[i]);
		scanf("%d %d %d", &op, &a, &b);
		if( op == 0 ) {
			if( a == b ) continue;
			else {
				int aTop = findTop_makeRank1( a );
				int bTop = findTop_makeRank1( b );
				parents[ aTop ] = bTop;
			}
		} else {
			checkSame( a, b );
		}
	}
}