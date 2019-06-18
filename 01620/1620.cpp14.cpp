#include <cstdio>
#include <string>
#include <iostream>
#include <map>

using  namespace std;

std::string intToString[100001];
std::map<std::string, int> stringToInt;

int my_stoi(string &str) {
    int result = 0;
    for(int i=0; i<str.length(); i++) {
        result *= 10; 
        result += str[i] - '0';
    }   
    return result;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    string temp;

    for(int i = 1; i <= n; i++) {
        char name[21];
        scanf("%s", name);
        temp = name;

        intToString[i] = name;
        stringToInt[name] = i;
    }   

    for(int i = 1; i <= m; i++) {
        char question[21];
        scanf("%s", question);
        temp = question;

        if( '0' <= temp[0] && temp[0] <= '9' ) { 
            cout << intToString[my_stoi(temp)] << "\n";;
        } else {
            cout <<stringToInt[question] << "\n";;
        }   
    }   
}
