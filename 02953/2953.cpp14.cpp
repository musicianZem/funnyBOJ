#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int maxi = 0;
    int maxS = 0;
    for(int i=1; i<=5; i++) {
        int a, b, c, d, e; cin >> a >> b >> c >> d ;
        int sumScore = a+b+c+d;
        if( maxS < sumScore ) {
            maxS = sumScore;
            maxi = i;
        }
    }
    cout << maxi << " " << maxS << endl;
}