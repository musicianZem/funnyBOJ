#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int testCase; scanf("%d", &testCase);
	while( testCase -- ) {
		int a, b; scanf("%d%d", &a, &b);
		
		int nam = a%10;
		while( --b ) {
			nam *= a;
			nam %= 10;
		}
		if( nam%10 ) printf("%d\n", nam%10);
		else printf("10\n");
	}
}