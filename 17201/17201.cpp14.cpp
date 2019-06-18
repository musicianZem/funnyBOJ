#include <iostream>
#include <string>

using namespace std;

int main() {
    int byeN; cin >> byeN;

    string str; cin >> str;

    char before = str[0];

    bool YesOrNo = true;
    for(int i=1; i<str.length(); i++) {
        if( str[i] == before )
        {
            YesOrNo = false;
            break;
        }
        else
        {
            before = str[i];
        }
    }

    if(YesOrNo)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
