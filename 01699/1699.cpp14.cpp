#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <thread>
#include <chrono>
#include <numeric>
#include <algorithm>
#include <limits.h>

using namespace std;

int cache[100001];

int main() {
    int N; cin >> N;

    fill_n(cache, 100001, 999999999);
    cache[0] = 0;

    for(int i=1; i*i<=N; i++) {
        for(int j=i*i; j<=N; j++) {
            cache[j] = min( cache[j - i*i] + 1, cache[j] );
        }   
    }

    cout << cache[N] << endl;
}
