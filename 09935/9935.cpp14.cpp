#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <deque>
#include <stack>
using namespace std;

int main() {
	string origin, bomb;
	int oL, bL;
	cin >> origin >> bomb;
	oL = origin.length();
	bL = bomb.length();

	vector <char> answer;
	for (int i = 0; i < oL; i++) {
		answer.push_back(origin[i]);

		bool isBomb = true;
		int bombChecker = bL - 1;
		for (vector<char>::reverse_iterator it = answer.rbegin(); it != answer.rend(), bombChecker >= 0; it++, bombChecker--) {
			if (*it != bomb[bombChecker]) {
				isBomb = false; break;
			}
		}

		if (isBomb) {
			for (int j = 0; j < bL; j++) {
				answer.pop_back();
			}
		}
	}
	if (answer.empty()) {
		cout << "FRULA";
	}
	for (vector<char>::iterator it = answer.begin(); it != answer.end(); it++) {
		cout << *it;
	}
}