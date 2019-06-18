#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int rooms[101];
int main() {
    string word; cin >> word;
    int wordLength = word.length();
    int distAa = 'A' - 'a';
    for (int i = 0; i < wordLength; i++) {
        if ('a' <= word[i] && word[i] <= 'z') {
            word[i] += distAa;
        }
        else {
            word[i] -= distAa;
        }
    }
    cout << word << endl;
}