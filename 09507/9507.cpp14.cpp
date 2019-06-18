#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

long long int kFibonacci[70];

int main() {
    kFibonacci[0] = 1;
    kFibonacci[1] = 1;
    kFibonacci[2] = 2;
    kFibonacci[3] = 4;
    for (int i = 4; i <= 69; i++) {
        kFibonacci[i] = kFibonacci[i - 4] + kFibonacci[i - 3] + kFibonacci[i - 2] + kFibonacci[i - 1];
    }
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << kFibonacci[n] << endl;
    }
}