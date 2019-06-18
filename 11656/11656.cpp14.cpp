#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    set<string> hi;
    string str; cin >> str;
    int le = str.length();
    for (int i = 0; i < le; i++) {
        hi.insert(str.substr(i, le - i));
    }
    for (set<string>::iterator it = hi.begin(); it != hi.end(); it++) {
        cout << *it << endl;
    }
}