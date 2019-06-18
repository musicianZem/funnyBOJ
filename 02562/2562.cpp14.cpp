#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
vector<int> arr;
int main() {
    int maxN = 0, maxIndex = 0;
    for (int i = 1; i <= 9; i++) {
        int temp; cin >> temp;
        if (maxN < temp) {
            maxN = temp;
            maxIndex = i;
        }
    }
    cout << maxN << endl << maxIndex << endl;
}