#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
#include <list>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <numeric>
using namespace std;

int finder, hider;
bool endFlag = false;
int bestFindCount = 100000;
queue<pair<int, int>> movingPoint;
bool visited[200000];
void moveFinder() {
    int next;
    while (!movingPoint.empty()) {
        int cur = movingPoint.front().first;
        int depth = movingPoint.front().second;
        movingPoint.pop();
        if (cur < 0 || depth >= bestFindCount) continue;
        
        if (visited[cur]) continue;
        visited[cur] = true;

        if (cur > hider) {
            bestFindCount = min(bestFindCount, depth + cur - hider);
            continue;
        }

        if (cur == hider) {
            bestFindCount = min(depth, bestFindCount);
            break;
        }

        movingPoint.push(make_pair(cur*2, depth + 1));
        movingPoint.push(make_pair(cur+1, depth + 1));
        movingPoint.push(make_pair(cur-1, depth + 1));
    }
}

int main() {
    cin >> finder >> hider;

    movingPoint.push(make_pair(finder, 0));
    moveFinder();

    cout << bestFindCount << endl;
}