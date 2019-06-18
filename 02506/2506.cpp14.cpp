#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
    int problemCount; cin >> problemCount;

    int scoreSum = 0;
    int beforeScore = 1;
    for (int i = 0; i < problemCount; i++) {
        bool score; cin >> score;
        if (score) {
            scoreSum += beforeScore++;
        }
        else {
            beforeScore = 1;
        }
    }
    cout << scoreSum << endl;
}