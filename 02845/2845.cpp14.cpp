#include <stdio.h>

int main() {
    int L, P; scanf("%d %d", &L, &P);
    L *= P;

    for(int i=0; i<5; i++) {
        int par; scanf("%d", &par);
        printf("%d ", par-L);
    }   
    printf("\n");
}
