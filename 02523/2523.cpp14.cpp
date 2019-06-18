#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N; cin >> N;
    int starCount = 1;
    int starCountMove = 1;
    while (starCount > 0) {
        for (int i = 0; i < starCount; i++) {
            cout << '*';
        } cout << endl;

        if (starCount == N) starCountMove = -1;
        starCount += starCountMove;
    }
}