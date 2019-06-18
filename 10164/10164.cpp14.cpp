#include <iostream>

using namespace std;

int arr[16][16];

int main() {
    int n, m, k; cin >> n >> m >> k;

    int mustVisitI = 1, mustVisitJ = 1;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if( --k <= 0 ) {
                mustVisitI = i;
                mustVisitJ = j;
                break;
            }
        }
        if( k <= 0 ) break;
    }

    for(int i=0; i<16; i++) {
        arr[i][1] = 1;
    }
    for(int j=0; j<16; j++) {
        arr[1][j] = 1;
    }

    for(int i=2; i<=mustVisitI; i++) {
        for(int j=2; j<=mustVisitJ; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }


    for(int i=mustVisitI; i<16; i++) {
        arr[i][mustVisitJ] = arr[mustVisitI][mustVisitJ];
    }
    for(int j=mustVisitJ; j<16; j++) {
        arr[mustVisitI][j] = arr[mustVisitI][mustVisitJ];
    }

    for(int i=mustVisitI+1; i<=n; i++) {
        for(int j=mustVisitJ+1; j<=m; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }

    cout << arr[n][m] << endl;

}
