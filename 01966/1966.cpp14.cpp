#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

int printQueue[100];
bool isPrinted[100];
int main() {
    int testCase; cin >> testCase;
    while (testCase--) {
        priority_queue<int> pq;
        int N, M; cin >> N >> M;
        for (int i = 0; i < N; i++) {
            int pri; cin >> pri;
            pq.push(pri);
            printQueue[i] = pri;
            isPrinted[i] = false;
        }

        int printCount = 0;
        int index = -1;
        int maxPriority = pq.top();
        while (true) {
            index++;

            if (index == N) index = 0;

            if (maxPriority != printQueue[index] || isPrinted[index] ) {
                continue;
            }

            printCount++;
            if (index == M) break;
            pq.pop();
            maxPriority = pq.top();
        }
        cout << printCount << endl;
    }
}