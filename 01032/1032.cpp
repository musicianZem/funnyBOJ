#include <iostream>
#include <string>
#include <list>
using namespace std;
int main() {
	string original, another;
	int N; cin >> N;
	cin >> original;
	int fileLength = original.length();

	while( --N ) {
		cin >> another;
		for(int i=0; i<fileLength; i++) {
			if( original[i] != another[i] ) {
				original[i] = '?';
			}
		}
	}
	cout << original << endl ;

	return 0;
}