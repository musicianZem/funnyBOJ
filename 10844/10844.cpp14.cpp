#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <deque>
#include <stack>
#include <cmath>
#include <fstream>
using namespace std;

long long dp[101][12];
const long long PROBLEM_MOD = 1000000000;

void setDPBase() {
	for (int i = 2; i < 11; i++) dp[1][i] = 1;
}

void fillDPArray(int N) {
	for (int i = 2; i <= N; i++) {
		for (int j = 1; j < 11; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % PROBLEM_MOD;
		}
	}
}

long long getAnswer(int N) {
	long long result = dp[N][1];
	for (int i = 2; i <= 10; i++) 
		result += dp[N][i];
	return result;
}

int main() {
	setDPBase();
	int N; cin >> N;
	fillDPArray(N);
	long long result = getAnswer(N) % PROBLEM_MOD;
	cout << result << endl;
}