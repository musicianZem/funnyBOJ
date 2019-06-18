#include <iostream>
using namespace std;
int main() {
    int a,b; char t;
    
    int testCase; cin >> testCase;
    while( testCase-- ) {
        cin >> a >> t >> b;
        cout << a+b << endl;
    }
	return 0;
}