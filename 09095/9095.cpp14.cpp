#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
using namespace std;

int countDFS;
void dfs(int nam) {
    if (nam == 0) {
        countDFS++;return;
    }
    if (nam > 0) dfs(nam - 1);
    if (nam > 1) dfs(nam - 2);
    if (nam > 2) dfs(nam - 3);
}

int main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        countDFS = 0;
        dfs(n);
        cout << countDFS << endl;
    }
}