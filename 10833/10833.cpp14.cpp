#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
#include <list>
#include <numeric>
using namespace std;
int main() {
    int n; cin >> n;
    int sumCount = 0;
    while (n--) {
        int a, b; cin >> a >> b;
        sumCount += b%a;
    }
    cout << sumCount << endl;
}