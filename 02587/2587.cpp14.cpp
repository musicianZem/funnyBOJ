#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    vector<int> arr;
    int avg = 0;
    for (int i = 0; i < 5; i++) {
        int temp; cin >> temp; arr.push_back(temp);
        avg += temp;
    }
    cout << avg/5 << endl;
    sort(arr.begin(), arr.end());
    cout << arr[2] << endl;
}