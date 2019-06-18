#include <iostream>
#include <string>
#include <map>
#include <cstdio>
using namespace std;

int arr[10];
int main() {
    int sumN = 0;

    string num; cin >> num;
    int L = num.length();
    
    for (int i = 0; i < L; i++) {
        int N = num[i] - '0';
        arr[N] ++;
        sumN += N;
    }

    if (sumN % 3 != 0 || arr[0] == 0) {
        cout << -1 << endl;
    }
    else {
        for (int i = 9; i >= 0; i--) {
            while (arr[i] != 0) {
                printf("%d", i);
                arr[i]--;
            }
        }
        printf("\n");
    }
    return 0;
}