#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <memory>
#include <thread>
#include <chrono>
#include <numeric>
#include <algorithm>
#include <limits.h>

using namespace std;

int cache[100001];

int main() {
    while( true ) {
        string str; cin >> str;
        if( str.compare("end") == 0 ) break;

        int strLength = str.length();

        char beforeChar = str[0];

        bool hasAEIOU = beforeChar == 'a' || beforeChar == 'e' || beforeChar == 'i' || beforeChar == 'o' || beforeChar == 'u';
        bool hasProblem = false;

        int continue_aeiou =  hasAEIOU;
        int continue_other = !hasAEIOU;

        for(int i=1; i<strLength; i++) {
            if( beforeChar == str[i] ) {
                switch( beforeChar ) {
                    case 'e' :
                        beforeChar = 'E';
                        break;
                    case 'o' :
                        beforeChar = 'O';
                        break;
                    default :
                        hasProblem = true;
                        break;
                }
            }

            switch( str[i] ) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    continue_aeiou ++;
                    continue_other = 0;
                    hasAEIOU = true;
                    break;
                default :
                    continue_aeiou = 0;
                    continue_other ++;
                    break;
            }

            if( continue_aeiou > 2 || continue_other > 2 ) {
                hasProblem = true;
            }

            beforeChar = str[i];
            if( hasProblem ) break;
        }

        if( hasProblem || !hasAEIOU ) {
            cout << "<" << str <<"> is not acceptable.\n";
        } else {
            cout << "<" << str <<"> is acceptable.\n";
        }
    }
}
