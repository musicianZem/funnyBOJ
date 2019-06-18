#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

typedef struct {
    string n;
    int len;
} BIGINT ;

BIGINT arr[1000001];

int BIGINTCompare(const BIGINT &o1, const BIGINT &o2) {
    if (o1.len != o2.len) return o1.len < o2.len;
    return o1.n < o2.n;
}

int main() {
    int n; cin >> n;
    map<long long, int> numMap;
    for (int i = 0; i < n; i++) {
        long long t; cin >> t;
        numMap[t] += 1;
    }
    int maxCount = 0;
    long long result;
    for (map<long long, int>::iterator it = numMap.begin(); it != numMap.end(); it++) {
        if (maxCount < it->second) {
            result = it->first;
            maxCount = it->second;
        }
        else if (it->second == maxCount && result > it->first) {
            result = it->first;
            maxCount = it->second;
        }
    }
    cout << result << endl;
}