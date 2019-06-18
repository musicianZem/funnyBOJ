#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    int nf = 1;
    int kf = 1;
    int nkf = 1;
    for (int i = 2; i <= n; i++) nf *= i;
    for (int i = 2; i <= k; i++) kf *= i;
    for (int i = 2; i <= n - k; i++) nkf *= i;
    cout << nf /( kf*nkf) << endl;
}