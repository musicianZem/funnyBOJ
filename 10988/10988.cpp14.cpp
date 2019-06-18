#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; cin >> str;
    int piv_l = 0;
    int piv_r = str.length() - 1;
    bool flag = true;
    while (piv_l < piv_r) {
        if (str[piv_l++] != str[piv_r--]) {
            
            flag = false; break;
        }
    }
    cout << flag << endl;
}