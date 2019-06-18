#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <list>
using namespace std;

int main() {
    string a, b; cin >> a >> b;
    int aL = a.length();
    int bL = b.length();

    int dist = bL - aL;
    int minDiff = bL;
    while (dist >= 0) {
        int tempDiff = 0;
        for (int i = 0; i < aL; i++) {
            if (a[i] != b[i + dist]) tempDiff++;
        }
        minDiff = min(minDiff, tempDiff);
        dist--;
    }
    cout << minDiff << endl;
}