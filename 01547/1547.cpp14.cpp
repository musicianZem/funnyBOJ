#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main() {
	int flag = 1;
	int n; scanf("%d", &n);
	for(int i=0; i<n; i++) {
		int x, y; scanf("%d %d", &x, &y);
		if( x == flag ) {
			flag = y;
		} else if( y == flag ) {
			flag = x;
		}
	}
	cout << flag;
}
