#include <iostream>
#include <algorithm>

using namespace std;

int digit[150];

int main() {
    int N, K; cin >> N >> K;

    for(int i=0; i<N; i++) {
        cin >> digit[i];
    }   

    int cnt = 0;
    int result = 0;
    while( result != K && cnt < N ) { 
        result = digit[result];
        cnt++;
    }   

    if( cnt >= N ) { 
        cout << -1 << endl;
    } else {
        cout << cnt << endl;
    }   
}
