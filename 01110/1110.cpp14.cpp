#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;


int main() {
    int N; cin >> N;
    int NC = N;
    int countN = 0;
    do {
        int upperBound = NC / 10;
        int lowerBound = NC % 10;
        NC = lowerBound * 10;


        int BoundSum = upperBound + lowerBound;

        NC += BoundSum % 10;
        countN++;

    } while( NC != N ) ;

    cout << countN ;
}
