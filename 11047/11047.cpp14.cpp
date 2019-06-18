#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

int coin[10];

int main() {
    int coinCount, money; cin >> coinCount >> money;
    for (int i = 0; i < coinCount; i++) {
        cin >> coin[i];
    }

    int coinSum = 0;
    while( coinCount-- ) {
        coinSum += money / coin[coinCount];
        money %= coin[coinCount];
    }
    cout << coinSum << endl;
}