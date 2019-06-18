#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
using namespace std;

int main() {
	int sum = 0, max = 0;
	for(int i=0; i<4; i++)  {
	
		int a, b; cin >> a >> b;
		sum -= a;
		sum += b;
		if( sum > max ) max = sum;	
	}
	cout << max;
}