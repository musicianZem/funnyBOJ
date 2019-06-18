#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main() {
    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i < 10; i++) {
        int m, p; cin >> m >> p;
        sum += (p - m);
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}