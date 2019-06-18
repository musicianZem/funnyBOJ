#include <stdio.h>

int main() {
    int testCase; scanf("%d", &testCase);
    while( testCase-- ) {
        int N; scanf("%d", &N);
        int cnt = 0;
        while( N > 0 ) {
            if( N % 2 ) printf("%d ", cnt);
            N /= 2;

            cnt++;
        }

        printf("\n");
    }
} 