#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
#include <list>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <numeric>
#include <set>
using namespace std;

int main() {
    set<int> hi;
    int n; cin >> n;
    int cutN = 1000000000;
    while (true) {
        if (n == 1) break;
        set<int>::iterator it = hi.find(n);
        if (it != hi.end()) break;
        hi.insert(n);
        int sumN = 0;
        for (int i = cutN; i > 0; i /= 10) {
            sumN += (n / i)*(n / i);
            n %= i;
        }
        n = sumN;
    }
    if (n == 1) cout << "HAPPY";
    else cout << "UNHAPPY";
}