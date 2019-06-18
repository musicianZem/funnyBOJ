#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
#include <queue>
#include <list>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <numeric>
using namespace std;

int arr[1000];
int main() {
    int avg = 0;
    int cbCount = 0, cbValue = 0;
    map<int, int> helloWorld;
    for (int i = 0; i < 10; i++) {
        int temp; cin >> temp;
        avg += temp;
        arr[temp] ++;
        if (cbCount < arr[temp]) {
            cbCount = arr[temp];
            cbValue = temp;
        }
    }
    cout << avg / 10 << endl << cbValue << endl;
}