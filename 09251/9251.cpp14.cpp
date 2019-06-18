#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int lcsCache[1001][1001]; // string maxsize : 1000

/* dynamic programming */
void makeLCSCache(const string &str1, const string &str2) {
    for(int i=0; i<=str1.length(); i++) {
        for(int j=0; j<=str2.length(); j++) {
            if( i == 0 || j == 0 ) {
                lcsCache[i][j] = 0;
            } else if( str1[ i-1 ] == str2[j-1] ) {
                lcsCache[i][j] = lcsCache[i-1][j-1] + 1;
            } else {
                lcsCache[i][j] = max( lcsCache[i-1][j], lcsCache[i][j-1] );
            }
        }
    }
}

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    makeLCSCache(str1, str2);

    cout << lcsCache[str1.length()][str2.length()] << endl;

}
