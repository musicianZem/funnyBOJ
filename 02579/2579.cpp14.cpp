#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int score[333];
int maxSc[333];
int main() {
    int n; scanf("%d", &n); // max 300
    for (int i = 1; i <= n; i++) {
        scanf("%d", &score[i]);
    }
    maxSc[1] = score[1];
    for (int i = 2; i <= n; i++) {
        maxSc[i] = max(maxSc[i - 3] + score[i - 1], maxSc[i - 2]) + score[i];
    }

    cout << maxSc[n] << endl;
}