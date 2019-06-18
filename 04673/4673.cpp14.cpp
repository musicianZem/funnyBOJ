#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

bool f[200000];

void d(int n) {
    if( n > 10000 ) return;

    f[n] = true;
    int original = n;
    int chun = n/1000; n %= 1000;
    int baek = n/100; n %= 100;
    int ship = n/10; n%=10;
    int il = n;
    d(original + chun + baek + ship + il);
}


int main() {

    for(int i=1; i<=10000; i++) {
        if( !f[i] ) {
            cout << i << endl;
            d(i);
        }
    }

}
