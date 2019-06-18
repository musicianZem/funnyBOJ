#include <iostream>
#include <string>
using namespace std;

int main() {
    int TC; cin >> TC;
    for(int tc=1; tc<=TC; tc++) {
        string str; cin >> str;
        for(int i=0; i<str.length(); i++) {
            if( str[i] == 'Z' ) str[i] = 'A';
            else str[i] += 1;
        }
        cout << "String #"<< tc << endl;
        cout << str << endl << endl;
    }
}   
