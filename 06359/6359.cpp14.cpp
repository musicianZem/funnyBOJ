#include <iostream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <map>
#include <algorithm>
using namespace std;
bool rooms[101];
int main() {
    int testCase; cin >> testCase;
    while (testCase--) {
        int n; cin >> n;
        memset(rooms, false, sizeof(rooms));
        for (int i = 1; i <= n; i++) {
            for (int jump = i; jump <= n; jump += i) {
                rooms[jump] = rooms[jump] == false;
            }
        }
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += rooms[i];
        }
        cout << sum << endl;
    }
}