#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    long long N; cin >> N;

    long long i = 1;
    long long iSum = 0;
    while( iSum + i <= N ) { 
        iSum += i;
        i++;
    }   
    cout << i-1 << endl;
}
