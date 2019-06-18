#include <iostream>
#include <algorithm>
using namespace std;

int dp[300][300];

int cut(int width, int height) {
    if (width == 1 && height == 1) return 0;
    if (width < height) swap(width, height);

    //cout << "cut(" << width << ", " << height << ")\n";
    int sum = 0;
    if (dp[width][height] != 0) return dp[width][height];
    sum++;
    // width > height
    int w1 = width / 2;
    int w2 = width - w1;
    sum += cut(w1, height);
    sum += cut(w2, height);
    dp[width][height] = sum;
    //cout << width << ", " << height << " = " << sum << endl;
    return sum;
}

int main() {
    int n, m; cin >> n >> m;
    cout << cut(n, m) << endl;
}