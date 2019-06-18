#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

double supArr[1000];
int main() {
    int testCase; cin >> testCase;
    while( testCase-- ) {
        int N; cin >> N;
        double sum = 0;
        for(int i=0; i<N; i++){
            cin >> supArr[i];
            sum += supArr[i];
        }
        sum /= N;

        int countStudent = 0;
        for(int i=0; i<N; i++) {
            if( sum < supArr[i] ) countStudent++;
        }
        printf("%.3lf%%\n", (double)countStudent * 100 / N);

    }
}
