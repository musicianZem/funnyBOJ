#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdio>
#include <map>
#include <queue>
using namespace std;

int arr[27];
int main() {
    int n; cin >> n;
    for (int i = 0;i < n; i++) {
        string s; cin >> s;
        arr[s[0] - 'a'] ++;
    }
    bool flag = false;
    for (int i = 0; i < 27; i++) {
        if (arr[i] > 4) {
            printf("%c", i + 'a');
            flag = true;
        }
    }
    if (flag == false) {
        printf("PREDAJA");
    }
}