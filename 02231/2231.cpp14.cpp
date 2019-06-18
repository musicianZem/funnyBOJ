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
    int N; cin >> N;
    int qnsgogkq, i;
    for (i = 1; i <= N; i++) {
        qnsgogkq = i;
        int copyi = i;
        for (int j = 1000000; j >= 1; j /= 10) {
            qnsgogkq += copyi / j;
            copyi %= j;
        }
        if (qnsgogkq == N) {
            break;
        }
    }
    if (qnsgogkq != N) {
        i = 0;
    }
    cout << i << endl;
}