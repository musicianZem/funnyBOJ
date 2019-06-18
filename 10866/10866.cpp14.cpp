#include <iostream>
#include <cstdio>
#include <string>
#include <deque>

using namespace std;

deque<int> intdeq;
int main() {

	int testCase; scanf("%d", &testCase);
	while( testCase -- ) {
		string op; cin >> op;
		int push_front	= op.compare("push_front");
		int push_back	= op.compare("push_back");
		int pop_front	= op.compare("pop_front");
		int pop_back	= op.compare("pop_back");
		int size		= op.compare("size");
		int empty		= op.compare("empty");
		int front		= op.compare("front");
		int back		= op.compare("back");

		if( push_front == 0 ) {
			int n; cin >> n;
			intdeq.push_front( n );
		} else if( push_back == 0 ) {
			int n; cin >> n;
			intdeq.push_back( n );
		} else if( pop_front == 0 ) {
			if( !intdeq.empty() ) {
				cout << intdeq.front() << endl;
				intdeq.pop_front();
			} else {
				cout << -1 << endl;
			}
		} else if( pop_back == 0 ) {
			if( !intdeq.empty() ) {
				cout << intdeq.back() << endl;
				intdeq.pop_back();
			} else {
				cout << -1 << endl;
			}
		} else if( size == 0 ) {
			cout << intdeq.size() << endl;
		} else if( empty == 0 ) {
			cout << intdeq.empty() << endl;
		} else if( front == 0 ) {
			if( !intdeq.empty() ) {
				cout << intdeq.front() << endl;
			} else {
				cout << -1 << endl;
			}
		} else if( back == 0 ) {
			if( !intdeq.empty() ) {
				cout << intdeq.back() << endl;
			} else {
				cout << -1 << endl;
			}
		}
	}
}