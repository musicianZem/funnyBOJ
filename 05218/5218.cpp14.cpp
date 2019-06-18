#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    while (testCase--) {
        string str1, str2; cin >> str1 >> str2;
        int L = str1.length();
        cout << "Distances: ";
        for (int i = 0; i < L; i++) {
            int dist = str2[i] - str1[i];
            if (dist < 0) dist += 26;
            cout << dist << " ";
        }
        cout << endl;
    }
}