#include <iostream>
#include <string>
#include <vector>

using namespace std;

string printBinary( char c, int isFirst )
{
    string result = ""; 
    int number = c - '0';

    if( number >= 4 ) { 
        number -= 4;
        result += "1";
    } else if( isFirst || result.size() != 0 ) { 
        result += "0";
    }   

    if( number >= 2 ) { 
        number -= 2;
        result += "1";
    } else if( isFirst || result.size() != 0 ) { 
        result += "0";
    }   

    if( number  ) { 
        result += "1";
    } else if( isFirst || result.size() != 0 ) { 
        result += "0";
    }   

    return result;
}

int main() {
    string str; cin >> str;
    int strLength = str.length();

    for(int i=0; i<str.length(); i++) {
        cout << printBinary(str[i], i); 
    }
    
    if( str.compare("0") == 0 ) {
        cout << 0;
    }
}
