#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = i+1; j < n; j++) {
            cout << " ";
        }
        for (int j = i+1; j < n; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = i + 1; j < n; j++) {
            cout << " ";
        }
        for (int j = i + 1; j < n; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}