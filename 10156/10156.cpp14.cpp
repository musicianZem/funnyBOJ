#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int kaka, n, money;
    cin >> kaka >> n >> money;
    int sumV = kaka * n;
    if (money > sumV) {
        cout << 0 << endl;
    }
    else {
        cout <<  sumV - money << endl;
    }
}