#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string str; cin >> str;
    int le = str.length();
    for (int i = 0; i < le; i++) {
        char c = str[i] - 3;
        if (c < 'A') c += 26;
        cout << c;
    }
    cout << endl;
}