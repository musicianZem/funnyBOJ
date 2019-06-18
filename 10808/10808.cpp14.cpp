#include <iostream>
#include <string>
using namespace std;

int arr[26];
int main() {
    string r; cin >> r;
    int l = r.length();
    for (int i = 0; i < l; i++) {
        arr[r[i] - 'a'] ++;
    }
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }
}