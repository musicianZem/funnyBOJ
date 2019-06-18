#include <iostream>
#include <string>
using namespace std;

int main() {
    while( true ) {
        string str; cin >> str;
        if( str.compare("0") == 0 ) break;

        int N = 0;
        for(int i=0; i<str.length(); i++) {
            N += str[i] - '0';
        }

        while( N >= 10 ) {
            int digital_sum = 0;
            while( N > 0 ) {
                digital_sum += N%10;
                N/=10;
            }
            N = digital_sum;
        }
        printf("%d\n", N);
    }
}
