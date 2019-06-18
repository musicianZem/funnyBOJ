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
    int maxInt = 0;
    int mi, mj;
    for (int i = 1; i <= 9;i++) {
        for (int j = 1; j <= 9; j++) {
            int temp; cin >> temp;
            if (temp > maxInt) {
                maxInt = temp;
                mi = i; mj = j;
            }
        }
    }
    cout << maxInt << endl;
    cout << mi << " " << mj << endl;
}