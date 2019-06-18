#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
class MyString {
public :
    string str;
    int strLength;
    MyString(string &s, size_t l) : str(s), strLength(l) {
        
    }
    friend bool operator < (const MyString &o1, const MyString &o2) {
        if (o1.strLength != o2.strLength)
            return o1.strLength < o2.strLength;
        return o1.str < o2.str;
    }

};
int main() {
    map<MyString, int> words;
    int n; cin >> n;
    while (n--) {
        string str; cin >> str;
        words[MyString{ str, str.length() }] += 1;
    }
    for (map<MyString, int>::iterator it = words.begin(); it != words.end(); it++) {
        //while (it->second--) {
            cout << it->first.str << endl;
       // }
    }
}