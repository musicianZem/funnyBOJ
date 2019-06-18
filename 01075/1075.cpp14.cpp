#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int N, F; cin >> N >> F;
    N /= 100;
    N *= 100;
    int sumF = F;
    while (N > sumF) {
        sumF += F;
    }
    int minNam = min(sumF % 100, (sumF-F)%100 + 100);

    if (minNam < 10) cout << 0;
    cout << minNam << endl;
}