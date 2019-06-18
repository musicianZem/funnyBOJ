#include <iostream>
using namespace std;

int main() {
    int n, module; cin >> n >> module;
    int mok = n/module;
    int nam = n%module;
    cout << mok << ".";
    for(int i=0; i<12; i++) {
	    nam *= 10;
        cout << nam/module;
        nam %= module;
    }
}