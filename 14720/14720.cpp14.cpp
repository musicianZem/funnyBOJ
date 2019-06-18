#include <iostream>
#include <cstdio>

using namespace std;

int shop[1001];

int main() {
    int N; cin >> N;
    for(int i=0; i<N; i++) {
        cin >> shop[i];
    }


    int drinkStatus = 2;
    int canDrink = 0;

    for(int i=0; i<N; i++) {
        for(int j=0; j<3; j++) {
            if( (drinkStatus+1)%3 == shop[i] ) {
                canDrink ++;
                drinkStatus = (drinkStatus + 1)%3;
            }
        }
    }

    cout << canDrink << endl;
}
