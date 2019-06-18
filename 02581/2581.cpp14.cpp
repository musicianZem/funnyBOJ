#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> primeNumber;

int main() {
    primeNumber.push_back(2);
    for(int i=3; i<10000; i++) {
        bool isPrime = true;
        for(auto &prime : primeNumber) {
            if( prime*prime > i ) { 
                break;
            }
            if( i % prime == 0 ) { 
                isPrime = false;
                break;
            }
        }
        if( isPrime ) { 
            primeNumber.push_back(i);
        }
    }   


    int M, N; cin >> M >> N;
    int primeSum = 0;
    int minPrime = 0;
    for(auto &i : primeNumber) {
        if( M <= i && i <= N ) { 
            if( !minPrime ) minPrime = i;
            primeSum += i;
        }   
    }
    if( primeSum == 0 ) { 
        primeSum = -1; 
    }   

    cout << primeSum << endl;
    if( primeSum > 0 ) { 
        cout << minPrime << endl;
    }
     
}
