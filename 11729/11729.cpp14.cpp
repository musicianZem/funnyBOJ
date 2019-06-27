#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

vector<pair<int, int>> hanoi_result;

void hanoi(int n, int from, int by, int to)
{
    if (n == 1) {
        hanoi_result.push_back( make_pair(from, to) );
    }
    else
    {
        hanoi(n - 1, from, to, by);
        hanoi_result.push_back( make_pair(from, to) );
        hanoi(n - 1, by, from, to);
    }
}

int main() {
    int N; scanf("%d", &N);
    hanoi(N, 1, 2, 3);

    int cnt = hanoi_result.size();

    printf("%d\n", cnt);
    for(int i=0; i<cnt; i++) {
        printf("%d %d\n", hanoi_result[i].first, hanoi_result[i].second);
    }
}
