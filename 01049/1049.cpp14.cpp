#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
using namespace std;

struct comp {
    bool operator()(const int& o1, const int& o2) {
        return o1 > o2;
    }
};
int main() {
    int lineCount, sellCount;
    cin >> lineCount >> sellCount;
    priority_queue<int, vector<int>, comp> minl6, minl1;

    for (int i = 0; i < sellCount; i++) {
        int l6, l1; cin >> l6 >> l1;
        minl6.push(l6);
        minl1.push(l1);
    }
    int min6 = minl6.top();
    int min1 = minl1.top();
    int valueSum = 0;
    while (lineCount > 0) {
        if (lineCount >= 6) {
            valueSum += min(min6, min1 * 6);
            lineCount -= 6;
        }
        else {
            valueSum += min(min6, min1*lineCount);
            lineCount = 0;
        }

    }
    cout << valueSum << endl;
}