#include <cstdio>

int cache[10001];

int main() {
    int numberCount; scanf("%d", &numberCount);
    for(int i=0; i<numberCount; i++) {
        int number; scanf("%d", &number);
        cache[number]++;
    }   

    for(int i=0; i<10001; i++) {
        while( cache[i]-- ) { 
            printf("%d\n", i); 
        }
    }   
}
