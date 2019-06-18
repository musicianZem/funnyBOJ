#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;
typedef struct D2 {
	int x, y;
}D2;

D2 d2[100000];
int D2Compare( const void *p1, const void *p2 ) {
	if( ((D2*)p1)->x > ((D2*)p2)->x ) return 1;
	else if( ((D2*)p1)->x < ((D2*)p2)->x ) return -1;
	else {
		if( ((D2*)p1)->y > ((D2*)p2)->y ) return 1;
		else return -1;
	}
}
int main() {
	int N; scanf("%d", &N);
	for(int i=0; i<N; i++)
		scanf("%d %d", &d2[i].x, &d2[i].y);

	qsort(d2, N, sizeof(D2), D2Compare);
	for(int i=0; i<N; i++)
		printf("%d %d\n", d2[i].x, d2[i].y);
}