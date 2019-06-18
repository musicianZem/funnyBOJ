#include <iostream>
using namespace std;

long long P[101];

void makeFunctionP() {
    P[1] = 1;
    P[2] = 1;
    P[3] = 1;
    P[4] = 2;
    P[5] = 2;

    for(int i=6; i<=100; i++) {
        P[i] = P[i-1] + P[i-5];
    }   
}

int main() {
    int testCase; cin >> testCase;

    makeFunctionP();

    while( testCase -- ) { 
        int N; cin >> N;
        cout << P[N] << endl;
    }   
}
