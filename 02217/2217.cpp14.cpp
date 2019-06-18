#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int rope[100000];

int main() {
    int ropeCount; scanf("%d", &ropeCount);
    for (int i = 0; i < ropeCount; i++) {
        scanf("%d", &rope[i]);
    }
    sort(rope, rope + ropeCount);
    int maxWeight = rope[0] * ropeCount;
    for (int i = 1; i < ropeCount; i++) {
        maxWeight = max(maxWeight, rope[i] * (ropeCount-i));
    }
    cout << maxWeight << endl;
}