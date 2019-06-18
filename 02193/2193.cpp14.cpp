#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
using namespace std;

long long nCr[100][100];

long long getnCr(int n, int r) {
	if ((n / 2) <= r) {
		r = n - r;
	}
	if (nCr[n][r]) return nCr[n][r];
	if (r == 0) return 1;
	if (r == 1) return n;
	nCr[n][r] = getnCr(n - 1, r) + getnCr(n - 1, r - 1);
	return nCr[n][r];
}

long long getnHr(int n, int r) {
	return getnCr(n + r - 1, r);
}

int main() {
	int N; cin >> N;
	int count0 = (N + 1) / 2;

	long long get2chinsu = 0;
	for (int i = N - 1, j = 1; i >= 0; i -= 2, j++) {
		get2chinsu += getnHr(j, i);
	}
	cout << get2chinsu << endl;
}