#include <iostream>
#include <set>
using namespace std;

int main() {
    while( true ) { // every testCase
        set<int> numlist;
        int n = 1;
        do { // while n != 0 && n != -1
            cin >> n;
            if( n < 1 ) break;
            numlist.insert(n);
        } while( n > 0 );

        if( n == -1 ) break;

        int cnt = 0;
        for(auto &i : numlist) {
            for(auto &j : numlist) {
                if(i*2==j) cnt++;
            }   
        }
        cout << cnt << endl;
    }   
}
