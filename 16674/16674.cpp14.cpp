#include <iostream>
#include <string>

using namespace std;

int digitArr[10];

int HowRelatedWith2018() {
    bool isNotRelated =
        digitArr[3] > 0 ||
        digitArr[4] > 0 ||
        digitArr[5] > 0 ||
        digitArr[6] > 0 ||
        digitArr[7] > 0 ||
        digitArr[9] > 0;

    if( isNotRelated ) return 0;

    bool isNotVeryRelated =
        digitArr[2] == 0 ||
        digitArr[0] == 0 ||
        digitArr[1] == 0 ||
        digitArr[8] == 0;

    if( isNotVeryRelated ) return 1;

    bool isTied =
        digitArr[2] == digitArr[0] 
        &&
        digitArr[1] == digitArr[8]
        &&
        digitArr[2] == digitArr[8];

    if( !isTied ) return 2;
    return 8;
}

int main() {
    string str; cin >> str;
    for(int i=0; i<str.length(); i++) {
        digitArr[ str[i]-'0' ] ++;
    }
    cout << HowRelatedWith2018() << endl;
} 