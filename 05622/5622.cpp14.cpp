#include <iostream>
#include <cstdio>
#include <string>
#include <deque>
#include <map>
using namespace std;

map<char, int> heyhey;
int main() {
	
	string dial; cin >> dial;
	int timeStamp = 0;
	for(int i=0; i<dial.length(); i++) {
		if( dial[i] >= 'A' && dial[i] <= 'C' ) {
			timeStamp += 3;
		} else if( dial[i] >= 'D' && dial[i] <= 'F' ) {
			timeStamp += 4;
		} else if( dial[i] >= 'G' && dial[i] <= 'I' ) {
			timeStamp += 5;
		} else if( dial[i] >= 'J' && dial[i] <= 'L' ) {
			timeStamp += 6;
		} else if( dial[i] >= 'M' && dial[i] <= 'O' ) {
			timeStamp += 7;
		} else if( dial[i] >= 'P' && dial[i] <= 'S' ) {
			timeStamp += 8;
		} else if( dial[i] >= 'T' && dial[i] <= 'V' ) {
			timeStamp += 9;
		} else if( dial[i] >= 'W' && dial[i] <= 'Z' ) {
			timeStamp += 10;
		}
	}

	cout << timeStamp ;
}