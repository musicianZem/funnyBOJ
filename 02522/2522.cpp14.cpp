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
    int star = 1;

    bool increaseFlag = true;

    while (star > 0) {
        for (int i = 0; i < blank; i++) {
            cout << ' ';
        }
        for (int i = 0; i < star; i++) {
            cout << '*';
        }
        cout << endl;
        if (star == N) increaseFlag = false;
        if (increaseFlag) {
            star++; blank--;
        }
        else {
            star--; blank++;
        }
    }
}