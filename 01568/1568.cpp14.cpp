#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;

    int singing = 0;
    while( N ) { 
        int start_with_1 = 1;

        while( start_with_1 <= N ) { 
            N -= start_with_1;
            start_with_1 ++; 
            singing ++; 
        }
    }   
    cout << singing << endl;
}
