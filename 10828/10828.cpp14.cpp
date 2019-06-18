#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <stack>
using namespace std;

int main() {
	stack<int> s;
	int N; cin >> N;
	for(int i=0; i<N; i++) {
		string op; cin >> op;

		if( op == "push" ) {
			int a; cin >> a;
			s.push( a );

		} else if( op == "top" ) {
			if( s.empty() ) {
				cout << -1 << endl;
			} else cout << s.top() << endl;

		} else if( op == "size") {
			cout << s.size() << endl;
		} else if( op == "empty") {
			if( s.empty() ) cout << 1 << endl;
            else cout << 0 << endl;
		} else if( op == "pop" ) {
			if( s.empty() ) {
				cout << -1 << endl;
			} else {
				cout << s.top() << endl;
				s.pop();
			}
		} else {
			return 0;
		}
	}
	return 0;
}