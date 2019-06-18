#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
    int N; cin >> N;
    int maxLength = 1;
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    fill_n(dp, N, 1);
    for (int i = 1; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[i] && dp[j] >= dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        maxLength = max(maxLength, dp[i]);
    }
    cout << maxLength << endl;
}