#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;
int yaksu[1000000];
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> yaksu[i];
    }
    sort(yaksu, yaksu + n);
    int left = 0, right = n - 1;
    cout << yaksu[left] * yaksu[right] << endl;
}