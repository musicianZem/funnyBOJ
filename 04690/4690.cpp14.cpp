#include <cstdio>
#include <set>
using namespace std;

int tripleCache[101];

int main() {
    for(int i=0; i<=100; i++) {
        tripleCache[i] = i*i*i;
    }   

    for(int a=2; a<=100; a++) {
        for(int b=2; b<=100; b++) {
            for(int c=b+1; c<=100; c++) {
                if( tripleCache[a] <= tripleCache[b] + tripleCache[c] ) break;
                for(int d=c+1; d<=100; d++) {
                    if( tripleCache[a] == tripleCache[b] + tripleCache[c] + tripleCache[d] ) { 
                        printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d); 
                    }
                    if( tripleCache[a] <= tripleCache[b] + tripleCache[c] + tripleCache[d] ) { 
                        break;
                    }
                }
            }
        }
    }   
}
