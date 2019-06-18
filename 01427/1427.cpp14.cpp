#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(const char& c1, const char &c2) {
    return c1 > c2;
}
int main() {
    vector<char> h;
    char c;
    do {
        scanf("%c", &c);
        h.push_back(c);
    } while (c != '\n');
    sort(h.begin(), h.end(), comp);
    for (vector<char>::iterator it = h.begin(); it != h.end(); it++) {
        cout << *it;
    }
}