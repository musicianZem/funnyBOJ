#include <iostream>
#include <queue>
using namespace std;
int main() {
    priority_queue<int> a;
    for(int i=0; i<4; i++) {
        int aa; cin >> aa; a.push(aa);
    }
    int sum=0;
    sum += a.top(); a.pop();
    sum += a.top(); a.pop();
    sum += a.top(); a.pop();
    int c, d; cin >> c >> d;
    
    if( c > d ) sum += c;
    else sum += d;
    cout << sum;
    return 0;
}