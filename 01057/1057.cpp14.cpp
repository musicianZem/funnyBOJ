#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <stack>
#include <iterator>
using namespace std;

int main() {
	int N, a, b; cin >> N >> a >> b;

	int meetRound = 0;
	while (true) {
		meetRound++;
		int aRound = (a + 1) / 2;
		int bRound = (b + 1) / 2;
		if (aRound == bRound) break;
		a = aRound;
		b = bRound;
	}

	cout << meetRound << endl;
}