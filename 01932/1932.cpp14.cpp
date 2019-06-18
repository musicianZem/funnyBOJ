#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <queue>
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

int arr[501][501];

int main() {
    int N; scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
        }
    }
    int result = 0;
    for (int i = 1; i <= N; i++) {
        result = max(result, arr[N][i]);
    }
    printf("%d", result);
}