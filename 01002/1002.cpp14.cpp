#include <iostream>
#include <cmath>
using namespace std;
double FFFF = 0.00001;
int main() {
    int testCase; cin >> testCase;
    while( testCase-- ) {
        int x1, y1, x2, y2; double r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double centerDistance = sqrt((double)((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)));


        if( x1 == x2 && y1 == y2 && r1 == r2 ) {
            cout << -1 << endl;
        } else if( centerDistance + r1 < r2 || centerDistance + r2 < r1 ) {
            cout << 0 << endl;
        } else if( r1 + r2 < centerDistance ) {
            cout << 0 << endl;
        } else if( abs(r1+r2-centerDistance) < FFFF || abs(r1+r2-centerDistance) < FFFF ) {
            cout << 1 << endl;
        } else if( abs(r1-r2-centerDistance) < FFFF || abs(r2-r1-centerDistance) < FFFF ) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
