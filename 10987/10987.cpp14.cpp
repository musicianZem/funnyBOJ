#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; cin >> str;
    int le = str.length();
    int cnt = 0;
    for (int i = 0; i < le; i++) {
        switch (str[i]) {
        case 'a' : case 'e' : case 'o' : case 'i' : case 'u' :
            cnt++;
        default: break;
        }
    }
    cout << cnt << endl;
}