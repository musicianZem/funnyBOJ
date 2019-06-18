#include <stdio.h>

int main() {
    for(int i=1000; i<10000; i++) {
        int check_10 = i;
        int check_12 = i;
        int check_16 = i;

        int sum_10 = 0;
        int sum_12 = 0;
        int sum_16 = 0;

        while( check_10 > 0 ) {
            sum_10 += check_10 % 10;
            check_10 /= 10;
        }
        while( check_12 > 0 ) {
            sum_12 += check_12 % 12;
            check_12 /= 12;
        }
        if( sum_10 != sum_12 ) continue;
        while( check_16 > 0 ) {
            sum_16 += check_16 % 16;
            check_16 /= 16;
        }

        if( sum_12 == sum_16 ) {
            printf("%d\n", i);
        }
    }
}   
