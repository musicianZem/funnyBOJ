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
		int repeatCount; cin >> repeatCount;
		string str; cin >> str;
		for (int i = 0; i < str.length(); i++) {
			for (int rep = 0; rep < repeatCount; rep++) {
				cout << str[i];
			}
		}
		cout << endl;
	}
}