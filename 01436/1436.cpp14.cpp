#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int N; cin >> N;

    int chk = 666;
    int cnt = 1;

    while( cnt != N ) {
        chk++;
        int chkCopy = chk;

        int sixCount = 0;
        while( chkCopy ) {
            if( chkCopy % 10 == 6 ) {
                sixCount ++;
                if( sixCount == 3 ) break;
            } else {
                sixCount = 0;
            }
            chkCopy /= 10;
        }

        if( sixCount == 3 ) {
            cnt++;
        }
    }
    cout << chk << endl;
}
