#include <iostream>
#include <algorithm>
using namespace std;

int pep[1000];
int waitTime[1000];
int main() {
	int N; cin >> N;
	for(int i=0; i<N; i++) {
		cin >> pep[i];
	}
	sort(pep, pep+N);
	
	int arrSum = 0;
	
	waitTime[1] = pep[0];
	for(int i=1; i<N; i++) {
		waitTime[i] = waitTime[i-1] + pep[i-1];
	}
		
	for(int i=0; i<N; i++) {
		arrSum += (pep[i] + waitTime[i]);
	}
	cout << arrSum << endl;
}