#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {

    int countT = 0;
    int original; cin >> original;
    for(int i=1; i<=original; i++) {
        int n = i;
        int chun = n/1000; n %= 1000;
        int baek = n/100; n %= 100;
        int ship = n/10; n%=10;
        int il = n;
        if( chun != 0 ) {
            if( chun - baek == baek - ship && baek - ship == ship - il )
                countT++;
        } else if( baek != 0 ) {
            if( baek-ship == ship-il )
                countT++;
        } else countT++;
    }

    cout << countT;
}
