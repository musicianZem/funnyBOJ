#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int minBurger = 2001;
    for (int i = 0; i < 3; i++) {
        int t; cin >> t;
        minBurger = min(minBurger, t);
    }
    int minCoke = 2001;
    for (int i = 0; i < 2; i++) {
        int t; cin >> t;
        minCoke = min(minCoke, t);
    }
    cout << minBurger + minCoke - 50 << endl;
}