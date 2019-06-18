#include <iostream>
#include <cstdio>
using namespace std;

int N;
int stair[1001];
int main() {
	cin >> N;
	for(int i=0; i<N; i++) cin >> stair[i];

	int max = 0;
	int startPoint = N-1;
	int beforePoint = N-1;
	for(int i=startPoint-1; i>-1; i--) {
		if( stair[ beforePoint ] > stair[ i ] ) {
			beforePoint--;
			
			if( stair[ startPoint ] - stair[ i ] > max )
				max = stair[ startPoint ] - stair[ i ] ;
		} else {

			beforePoint = i;
			startPoint = i;
		}
	}
	cout << max << endl;
}