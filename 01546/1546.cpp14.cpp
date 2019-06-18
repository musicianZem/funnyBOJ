#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

double supArr[1000];
int main() {
    int N; cin >> N;
    double M = 0;
    for(int i=0; i<N; i++) {
        cin >> supArr[i];
        if( M < supArr[i] ) { M = supArr[i]; }
    }

    double sum = 0;
    for(int i=0; i<N; i++) {
        supArr[i] *= 100;
        supArr[i] /= M;
        sum += supArr[i];
    }

    printf("%.2lf", sum/N);
}
