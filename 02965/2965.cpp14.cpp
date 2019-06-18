#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main() {
	int a, b, c; cin >> a >> b >> c;
	int dist1 = c-b;
	int dist2 = b-a;
	if( dist1 > dist2 ) {
		cout << dist1 -1;
	} else {
		cout << dist2 -1;
	}
}
