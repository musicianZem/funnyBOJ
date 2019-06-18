#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int cache[1001][1001];
const int modulor = 10007;

int nCr(int n, int r) {
    if (cache[n][r]) return cache[n][r];
    if (r > n / 2) {
        r = n - r;
    }

    if (r == 0) {
        cache[n][r] = 1;
    }
    else if (r == 1) {
        cache[n][r] = n;
    }
    else {
        int NCR_N = nCr(n - 1, r) % modulor;
        int NCR_NR = nCr(n - 1, r-1) % modulor;
        cache[n][r] = NCR_N + NCR_NR;
        cache[n][r] %= modulor;
    }
    return cache[n][r];
}

int main() {
    int N; scanf("%d", &N);
    int n = N;
    int r = 0;
    int sum_nCr = 0;
    while (n >= r) {
        sum_nCr += nCr(n, r);
        sum_nCr %= modulor;
        n--; r ++;
    }
    cout << sum_nCr << endl;
}