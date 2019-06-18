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

bool visited[1001];
int arr[1001];
int main() {
    int testCase; cin >> testCase;
    while (testCase--) {
        int n; cin >> n;
        memset(visited, 0, sizeof(visited));
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        int countList = 0;
        for (int i = 1; i <= n; i++) {
            if (visited[i]) continue;
            countList++;
            int moveIndex = i;

            do {
                moveIndex = arr[moveIndex];
                visited[moveIndex] = true;
            } while (moveIndex != i);
        }
        cout << countList << endl;
    }
}