#include <iostream>
using namespace std;
int main() {
    int a[5];
    for(int i=0; i<5; i++) cin >> a[i] ;
    int sum = 0;
    for(int i=0; i<5; i++) sum += a[i]*a[i];
    
    cout << sum%10;
}