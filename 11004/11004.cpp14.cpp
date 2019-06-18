#include <cstdio>
#include <algorithm>

int cache[50000001];

int main() {
    int numberCount, kth; scanf("%d %d", &numberCount, &kth);
    for(int i=0; i<numberCount; i++) {
        scanf("%d", &cache[i]);
    }
    
    std::sort(cache, cache+numberCount);
    
    printf("%d\n", cache[kth-1]);
}
