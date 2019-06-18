#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
#include <list>
#include <numeric>
using namespace std;

int euclid(int a, int b) {
    while (true) {
        int n = a%b;
        if (n == 0) return b;
        a = b;
        b = n;
    }
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int a, b; cin >> a >> b;
        cout << a*b / euclid(a, b) << endl;
    }
}