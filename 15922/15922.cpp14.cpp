#include <iostream>
#include <algorithm>

using namespace std;

int saveLength = 0;

int main() {
    int N; cin >> N;
    int bl = -1000000001, br = -1000000001;

    for(int i=0; i<N; i++) {
        int l, r; cin >> l >> r;

        if( br < l ) { 
            saveLength += br - bl; 
            bl = l;
            br = r;
        } else {
            br = max(br, r); 
        }
    }   

    saveLength += (br - bl);
    cout << saveLength << endl;
}
