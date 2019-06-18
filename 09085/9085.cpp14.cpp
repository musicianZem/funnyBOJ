#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    while (testCase--) {
        int n; cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int t; cin >> t;
            sum += t;
        }
        cout << sum << endl;

    }
}