#include <cstdio>
#include <queue>
#include <vector>
int main() {   

    int N; scanf("%d", &N);

    std::priority_queue<int, std::vector<int>, std::greater<int>> intHeap;

    for(int i=0; i<N; i++) {
        int num; scanf("%d", &num);
        if( num == 0 ) { 
            if( intHeap.empty() ) { 
                printf("0\n");
            } else {
                printf("%d\n", intHeap.top());
                intHeap.pop();
            }   
        } else {
            intHeap.push(num);
        }   
    }   
} 