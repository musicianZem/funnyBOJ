#include <iostream>
#include <cstdio>
#include <string>
#include <stack>

using namespace std;

int main() {
    string i1, i2; cin >> i1 >> i2; 

    int i1L = i1.length();
    int i2L = i2.length();

    if( i1L > i2L ) { 
        string temp = ""; 
        for(int i=i2L; i<i1L; i++) temp += "0";
        i2 = temp + i2; 
        i2L = i1L;
    }   

    if( i1L < i2L ) { 
        string temp = ""; 
        for(int i=i1L; i<i2L; i++) temp += "0";
        i1 = temp + i1; 
        i1L = i2L;
    }   

    stack<int> result;
    bool carry = false;
    for(int i=i1L-1; i>=0; i--) {
        int p = i1[i] - '0' + i2[i] - '0' + carry;
        if( p <= 9 ) { 
            carry = false;
        } else {
            p -= 10; 
            carry = true;
        }   
        result.push(p);
    }   

    if( carry ) result.push(1);
    while( !result.empty() ) { 
        printf("%d", result.top());
        result.pop();
    }   
    printf("\n");

}
