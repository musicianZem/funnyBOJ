#include <iostream>
#include <stack>
#include <string>

using namespace std;

int arr[100000];
stack<int> hi;

int main() {
	int n; cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	int inputNumber = 1;
	int cur = 0;
	string ops = "";

	while( cur != n ) {
		if( hi.empty() ) {
			hi.push( inputNumber );
			inputNumber ++;
			ops += "+\n";
		} else {
			if( hi.top() == arr[ cur ] ) {
				ops += "-\n";
				hi.pop();
				cur++;
			} else if( hi.top() < arr[ cur ] ) {
				hi.push( inputNumber );
				inputNumber ++;
				ops += "+\n";
			} else {
				ops = "NO"; break;
			}
		}
	}

	cout << ops;
    return 0;
}