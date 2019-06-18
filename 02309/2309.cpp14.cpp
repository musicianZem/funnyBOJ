#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
using namespace std;

int main() {
    int k[10], kisum = 0;
    for (int i = 0; i < 9; i++) {
        cin >> k[i];
        kisum += k[i];
    }
    sort(k, k + 9);
    int minus = kisum - 100;
    int notNan1 = -1, notNan2 = -1;
    for (int i = 1; i < 9;i++) {
        for (int j = 0; j < i; j++) {
            if (minus == k[i] + k[j]) {
                notNan1 = i;
                notNan2 = j;
                break;
            }
        }
        if (notNan1 != -1) break;
    }
    for (int i = 0; i < 9; i++) {
        if (i != notNan1 && i != notNan2) {
            cout << k[i] << endl;
        }
    }
}