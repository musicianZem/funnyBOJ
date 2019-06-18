#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int cal[30][30];

long long int nCr(int n, int r) {
    if (cal[n][r]) return cal[n][r];
    if (r == 0 || r == n ) { 
        cal[n][r] = 1;
        return 1;
    }
    else if (r == 1) {
        cal[n][r] = n;
        return n;
    }

    long long int result = nCr(n - 1, r - 1) + nCr(n - 1, r);
    cal[n][r] = result;
    return result;
}

int main(){
    int testCase; cin >> testCase;
    while (testCase--) {
        int n, m; cin >> n >> m;
        if (n + n > m) {
            n = m - n;
        }
        cout << nCr(m, n) << endl;
    }
}