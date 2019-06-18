#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int sums; cin >> sums;
    for (int i = 0; i < 9; i++) {
        int t; cin >> t; sums -= t;
    }
    cout << sums << endl;
}