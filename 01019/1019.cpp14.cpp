#include <iostream>
#include <cstdio>

using namespace std;

long long digit[10];

int main() {
    int N; cin >> N;
    int beforeCount = 0;

    for(int times=1; N>0; times*=10) {

        int mod = N % 10; N /= 10; 

        // 각 자리 출현 빈도 계산
        for(int i=0; i<10; i++) {

            if( i < mod )

                digit[i] += ( N + 1 ) * times;

            else if( i == mod )

                digit[i] += ( N * times ) + beforeCount + 1;

            else

                digit[i] += ( N * times );

        }

        digit[0] -= times;

        beforeCount += mod * times;

    }   

    for(int i=0; i<10; i++) cout << digit[i] << " "; cout << endl;
}
