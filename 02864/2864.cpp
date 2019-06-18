#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
int charToInt( char &num ) {
	switch( num ) {
	case '0' : return 0;
	case '1' : return 1;
	case '2' : return 2;
	case '3' : return 3;
	case '4' : return 4;
	case '5' : return 5;
	case '6' : return 6;
	case '7' : return 7;
	case '8' : return 8;
	case '9' : return 9;
	default : return -1;
	}
}
int main( void ) {
	string oriA, oriB; cin >> oriA >> oriB;
	stack<char> a, b;
	for(int i=0; i<oriA.length(); i++) a.push( oriA[i] );
	for(int i=0; i<oriB.length(); i++) b.push( oriB[i] );
	int minA = 0, maxA = 0;
	int minB = 0, maxB = 0;
	int jarisu = 1;
	while( !a.empty() ) {
		int forChange = charToInt( a.top() );
		if( forChange == 5 || forChange == 6 ) {
			int plus5 = 5 * jarisu;
			int plus6 = 6 * jarisu;
			minA += plus5;
			maxA += plus6;
		} else {
			forChange *= jarisu;
			minA += forChange;
			maxA += forChange;
		}
		a.pop();
		jarisu *= 10;
	}
	jarisu = 1;
	while( !b.empty() ) {
		int forChange = charToInt( b.top() );
		if( forChange == 5 || forChange == 6 ) {
			int plus5 = 5 * jarisu;
			int plus6 = 6 * jarisu;
			minB += plus5;
			maxB += plus6;
		} else {
			forChange *= jarisu;
			minB += forChange;
			maxB += forChange;
		}
		b.pop();
		jarisu *= 10;
	}
	cout << minA + minB << " " << maxA + maxB;
	return 0;
}