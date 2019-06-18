#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 10001;
int n, k;
int cache[MAXN];

int main() {
    fill_n(cache, MAXN, 0);
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        int cost; cin >> cost;
        if (cost > k) continue;
        cache[cost]++;
        for (int j = cost; j <= k; j++) {
            cache[j] += cache[j - cost];
        }
    }

    cout << cache[k] << endl;
    return 0;
}