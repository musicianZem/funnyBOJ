#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int superArray[1001];

int main() {
	int N; scanf("%d", &N);
	for(int i=0; i<N; i++) {
		scanf("%d", &superArray[i]);
	}
	sort(&superArray[0], &superArray[N]);

	int sum = 0;
	int timesN = N;
	for(int i=0; i<N; i++) {
		sum += timesN * superArray[i];
		timesN--;
	}
	cout << sum << endl;

	//system("pause");
	return 0;
}