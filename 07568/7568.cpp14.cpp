#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <fstream>
#include <locale>
#include <codecvt>
#include <sstream>
using namespace std;

int A[50], B[50];
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i] >> B[i];
    }
    for (int i = 0; i < n; i++) {
        int countBigger = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (A[i] < A[j] && B[i] < B[j]) {
                countBigger++;
            }
        }
        cout << countBigger << " ";
    }
}