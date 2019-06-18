#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int spaceCount = n - 1;
    int starCount = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < spaceCount; j++) {
            cout << ' ';
        }
        for (int j = 0; j < starCount; j++) {
            cout << '*';
        }
        cout << endl;
        spaceCount--;
        starCount += 2;
    }
}