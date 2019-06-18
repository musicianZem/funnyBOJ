#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;

int main() {
	map<int, int> btree;
	
	int n; scanf("%d", &n);
	
	int iNum; scanf("%d", &iNum);
	btree[ iNum ] = 1;

	long long int depthSum = 1;

	for(int i=1; i<n; i++) {
		scanf("%d", &iNum);
		map<int, int>::iterator it = btree.lower_bound( iNum );
		int tempDepth;
		if( it == btree.begin() ) {
			tempDepth = it->second + 1;
		} else if( it == btree.end() ) {
			it--;
			tempDepth = it->second + 1;
		} else {
			tempDepth = it->second;
			it--;
			tempDepth = max( tempDepth, it->second ) + 1;
		}

		depthSum += tempDepth;
		btree[ iNum ] = tempDepth;
	}

	cout << depthSum << endl;
}
