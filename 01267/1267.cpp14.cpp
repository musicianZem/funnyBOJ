#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int callCount; cin >> callCount;
    vector<int> callTime(callCount);

    for(int i=0; i<callCount; i++) {
        cin >> callTime[i];
    }

    int Y = 0;
    int M = 0;

    for(int i=0; i<callCount; i++) {
        Y += ((callTime[i] / 30) + 1) * 10;
        M += ((callTime[i] / 60) + 1) * 15;
    }
    
    if( Y == M ) {
        cout << "Y M " << Y << endl;
    } else if( Y > M ) {
        cout << "M " << M << endl;
    } else {
        cout << "Y " << Y << endl;
    }
} 