#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        sum += temp;
    }
    if (sum * 2 > n) {
        cout << "Junhee is cute!" << endl;
    }
    else {
        cout << "Junhee is not cute!" << endl;
    }
}