#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stack>
#include <iterator>
using namespace std;

int main() {
	int testCase; cin >> testCase;
	while (testCase--) {
		string str; cin >> str;
		int openCount = 0;
		bool isCorrect = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				openCount++;
			}
			else {
				openCount--;
				if (openCount < 0) {
					isCorrect = false;
					break;
				}
			}
        }
        if( openCount != 0 ) {
            isCorrect = false;
        }
		if (isCorrect) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
}