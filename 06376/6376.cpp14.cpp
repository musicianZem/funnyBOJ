#include <cstdio>
#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

double log_e(int n) {

    double result = 1.f;
    do {

        int fact = 1;
        for(int i=2; i<=n; i++) {
            fact *= i;
        }

        result += 1.f / (double)(fact);

    } while( --n );
    
    return result;
}

int main() {
    int n = 0;
    printf("n e\n");
    printf("- -----------\n");
    printf("0 1\n");
    printf("1 2\n");
    printf("2 2.5\n");
    for(int i=3; i<=9; i++) {
        printf("%d %0.9f\n", i, log_e(i));
    }   
}
