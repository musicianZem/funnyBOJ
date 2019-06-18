#include <stdio.h>

int numberList[13];

int main() {

    do {
        int N; scanf("%d", &N);
        if( N == 0 ) break;

        for(int i=0; i<N; i++) {
            scanf("%d", &numberList[i]);
        }

        for(int i0=0; i0<N; i0++) {
            for(int i1=i0+1; i1<N; i1++) {
                for(int i2=i1+1; i2<N; i2++) {
                    for(int i3=i2+1; i3<N; i3++) {
                        for(int i4=i3+1; i4<N; i4++) {
                            for(int i5=i4+1; i5<N; i5++) {
                                printf("%d %d %d %d %d %d\n", numberList[i0], numberList[i1], numberList[i2], numberList[i3], numberList[i4], numberList[i5]);
                            }   
                        }   
                    }   
                }   
            }   
        }   
        printf("\n");
    } while(true);
}
