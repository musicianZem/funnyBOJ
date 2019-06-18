#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
#include <list>
#include <numeric>
using namespace std;

int arr[100];
int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < n; i++) {
        int jump; cin >> jump;
        int j = i;
        while (jump--) {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}