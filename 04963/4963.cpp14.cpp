#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;

int myMap[52][52];
bool isChecked[52][52];
int W, H;

void dfs(int i, int j) {
    isChecked[i][j] = true;
    if (!isChecked[i - 1][j - 1] && myMap[i - 1][j - 1]) {
        dfs(i - 1, j - 1);
    }
    if (!isChecked[i - 1][j] && myMap[i - 1][j]) {
        dfs(i - 1, j);
    }
    if (!isChecked[i][j - 1] && myMap[i][j - 1]) {
        dfs(i, j - 1);
    }
    if (!isChecked[i + 1][j - 1] && myMap[i + 1][j - 1]) {
        dfs(i + 1, j - 1);
    }
    if (!isChecked[i - 1][j + 1] && myMap[i - 1][j + 1]) {
        dfs(i - 1, j + 1);
    }
    if (!isChecked[i][j + 1] && myMap[i][j + 1]) {
        dfs(i, j + 1);
    }
    if (!isChecked[i + 1][j] && myMap[i + 1][j]) {
        dfs(i + 1, j);
    }
    if (!isChecked[i + 1][j + 1] && myMap[i + 1][j + 1]) {
        dfs(i + 1, j + 1);
    }
}

int main() {
    while (true) {
        cin >> W >> H;
        if (W + H == 0) break;

        memset(myMap, 0, sizeof(myMap));
        for (int h = 1; h <= H; h++) {
            for (int w = 1; w <= W; w++) {
                cin >> myMap[h][w];
            }
        }

        memset(isChecked, false, sizeof(isChecked));
        int visitCount = 0;
        for (int h = 1; h <= H; h++) {
            for (int w = 1; w <= W; w++) {
                if (isChecked[h][w]) continue;
                if (myMap[h][w]) {
                    dfs(h, w);
                    visitCount++;
                }
            }
        }
        cout << visitCount << endl;
    }
}