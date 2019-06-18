#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int testCase; cin >> testCase;
    for(int tc=1; tc<=testCase; tc++) {
        int N; cin >> N;
        vector<int> arr;
        int minScore = 100, maxScore = 0;
        for(int i=0; i<N; i++) {
            int t; cin >> t;
            arr.push_back(t);
            minScore = min(minScore, arr[i]);
            maxScore = max(maxScore, arr[i]);
        }

        int maxGap = 0;
        sort(arr.begin(), arr.end());
        for(int i=1; i<N; i++) {
            maxGap = max( maxGap, arr[i] - arr[i-1] );
        }   

        cout << "Class " << tc << endl;
        cout << "Max " << maxScore << ", Min " << minScore << ", Largest gap " << maxGap << endl;
    }   
    return 0;
}
