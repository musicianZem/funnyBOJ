#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    int sum = 1;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        sum += (temp);
    }
    cout << sum - n << endl;
}