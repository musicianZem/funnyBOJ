#include <iostream>
#include <string>
#include <set>
using namespace std;

void stringToLower(string &str) {
	int L = str.length();
	for (int i = 0; i < L; i++) {
		if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] -= ('A' - 'a');
		}
	}
}

int main() {
	while (true) {
		string str; getline(cin, str);
		if (str.compare("#") == 0) break;

		stringToLower(str);

		set<char> alphaSet;
		for (int i = 0; i < str.length(); i++) {
			if( 'a' <= str[i] && str[i] <= 'z' )
				alphaSet.insert(str[i]);
		}

		cout << alphaSet.size() << endl;

	}
}