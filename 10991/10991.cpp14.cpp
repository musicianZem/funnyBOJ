#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
    int N; cin >> N;
    int blank = N - 1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < blank; j++) {
            cout << ' ';
        }
        cout << '*';
        for (int j = 0; j < i; j++) {
            cout << " *";
        }
        cout << endl;
        blank--;
    }
}