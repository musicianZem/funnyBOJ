#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int gcd(int a, int b) {
    if( a%b ) {
        return gcd(b, a%b);
    } else {
        return b;
    }
}

int main() {
    int food, people; cin >> food >> people;

    int cutCount = gcd(food, people);

    if( cutCount == 1 ) {
        cout << people - 1 << endl;
    } else {
        cout << people - cutCount << endl;
    }
}
