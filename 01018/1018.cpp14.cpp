#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int N, M; cin >> N >> M;

    vector<string> strMap(N);

    for(int i=0; i<N; i++) {
        string str; cin >> str;
        strMap[i] = str;
    }   

            char isW = 'W';
    int minResult = 64; 
    for(int i=0; i<=N-8; i++) {
        for(int j=0; j<=M-8; j++) {
            int sb = 0;
            int sw = 0;

            for(int ii=0; ii<8; ii++) {
                for(int jj=0; jj<8; jj++) {
                    if( strMap[ii+i][jj+j] == isW ) { 
                        sb ++; 
                    } else {
                        sw ++; 
                    }
                    if( isW == 'W' )
                        isW = 'B';
                    else
                        isW = 'W';
                }
                if( isW == 'W' )
                    isW = 'B';
                else
                    isW = 'W';

            }

            minResult = min(minResult, sb);
            minResult = min(minResult, sw);
            //cout << i << " " << j << " = " << sb << " " << sw << endl;
        }
    }   

    cout << minResult << endl;
}
