#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <map>
#include <vector>
using namespace std;
int main() {
	bool flag = false;

	int X; scanf("%d", &X);

	int mother = 1, son = 1;
	for(int i=1; i<X; i++) {
		//cout << i+1 << " - " << son << " " << mother << " " << flag << endl;
		if( flag ) {
			if( mother == 1 ) {
				flag = false;
				son++;
			} else {
				son++; mother--;
			}
		} else {
			if( son == 1 ) {
				flag = true;
				mother++;
			} else {
				son--; mother++;
			}
		}
	}
	cout << son << "/" << mother << endl;
}