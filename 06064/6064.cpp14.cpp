#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <thread>
#include <chrono>
#include <numeric>
#include <algorithm>
#include <limits.h>

using namespace std;

int main() {

    int testCase; cin >> testCase;
    while( testCase-- ) {
        int M, N; cin >> M >> N;
        int x, y; cin >> x >> y;

        int expectX = 1, expectY = 1;

        int count = 1;

        while( expectX != M || expectY != N ) {
            expectX %= M; expectY %= N;

            if( x-expectX == y-expectY && x-expectX > 0 ) {
                count += x-expectX;
                expectX = x;
                expectY = y;
                break;
            }

            int minPlus = min( M-expectX, N-expectY );
            expectX += minPlus;
            expectY += minPlus;
            count += minPlus;
        }

        if( expectX != x || expectY != y ) {
            cout << -1 << endl;
        } else {
            cout << count << endl;
        }

    }
}
