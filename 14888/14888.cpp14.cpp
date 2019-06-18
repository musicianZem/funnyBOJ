#include <iostream>
#include <algorithm>
using namespace std;

int MYMAX = -1000000001;
int MYMIN = +1000000001;

int N, arr[11], op[4];

void updateMAXMIN(int n) {
    MYMAX = max(MYMAX, n);
    MYMIN = min(MYMIN, n);
}

void dfs(int cur) {
    static int sum = arr[0];
    if (cur == N) {
        updateMAXMIN(sum);
        return;
    }
    for (int i = 0; i < 4; i++) {
        if (op[i] != 0) {
            int beforeSum = sum;
            switch (i) {
            case 0: sum += arr[cur]; break;
            case 1: sum -= arr[cur]; break;
            case 2: sum *= arr[cur]; break;
            case 3: sum /= arr[cur]; break;
            }
            op[i]--;
            dfs(cur + 1);
            sum = beforeSum;
            op[i]++;
        }
    }
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> op[i];
    }
    dfs(1);
    cout << MYMAX << " " << MYMIN << endl;
}