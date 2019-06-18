#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main() {
    string str; cin >> str;

    stack<int> result;

    int digit = 1, sum_3 = 0;

    for(int i=str.length()-1; i >= 0; i--) {
        if( str[i] == '1' ) {
            sum_3 += digit;
        }
        digit <<= 1;

        if( digit == 8 ) {
            result.push(sum_3);
            digit = 1;
            sum_3 = 0;
        }
    }
    if( digit != 1 ) result.push( sum_3 );


    while( !result.empty() ) {
        cout << result.top();
        result.pop();
    }
    cout << endl;
}
