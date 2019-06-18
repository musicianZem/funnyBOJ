#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	priority_queue<int> max;
	max.push( x );
	max.push( y );
	max.push( w-x );
	max.push( h-y );
	
	max.pop(); max.pop(); max.pop();
	cout << max.top();
	return 0;
}