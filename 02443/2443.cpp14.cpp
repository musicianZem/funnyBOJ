#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
    int N; cin >> N;
    int blankCount = 0;
    int starCount = (N << 1) - 1;
    while (starCount > 0) {
        for (int i = 0; i < blankCount; i++) cout << ' ';
        for (int i = 0; i < starCount; i++) cout << '*';
        cout << endl;
        blankCount++;
        starCount -= 2;
    }
}