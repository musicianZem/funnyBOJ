// O(1000000 * 6)
#include <iostream>
#include <algorithm>
using namespace std;
bool isBroken[10];
int intLengthCanGo(int n) {
    if (n == 0) return !isBroken[0];
    int result = 0;
    while (n>0) {
        result++;
        if (isBroken[n % 10]) return false;
        n /= 10;
    }
    return result;
}
int main() {
    int channel; cin >> channel;
    int missCount; cin >> missCount;
    for (int i = 0; i < missCount; i++) {
        int breakN; cin >> breakN;
        isBroken[breakN] = true;
    }
    int minButton = channel - 100;
    if (minButton < 0) minButton = -minButton;

    for (int i = 0; i < 1000000; i++) { // 500000 - 111111 is worst
        int jarisu = intLengthCanGo(i);
        if (jarisu) {
            minButton = min(minButton, abs(i - channel) + jarisu);
        }
    }
    cout << minButton << endl;
}
/*
// O(500000)
#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int channel, missCount;
int minMoveCount;
bool isBroken[10];
vector<int> canUse;

void calculateMinCount(int N) {
    int jarisu = 1000000;
    int numButton = 7;
    if (N == 0) {
        jarisu = 1; numButton = 1;
    }
    else {
        while (!(N / jarisu)) {
            jarisu /= 10;
            numButton--;
        }
    }
    //cout << N << "에서 " << channel << "로 가기 위해서는 " << abs(channel - N) + numButton << " 번의 (+/-) 클릭이 필요합니다.\n";
    minMoveCount = min(minMoveCount, abs(channel - N) + numButton);
}

int main() {
    cin >> channel >> missCount;
    for (int i = 0; i < missCount; i++) {
        int missChannel; cin >> missChannel;
        isBroken[missChannel] = true;
    }

    // use - + only
    minMoveCount = abs(channel - 100);
    //cout << 100 << "에서\t" << channel << "로 가기 위해서는 " << minMoveCount << " 번의 (+/-) 클릭이 필요합니다.\n";
    if (missCount == 10) {
        cout << minMoveCount << endl;
        return 0;
    }
    else if (channel == 0) {
        for (int i = 0; i < 10; i++) {
            if (!isBroken[i]) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    // under channel
    int under_near = 1000000;
    int goDown = channel;
    while (goDown >= 0) {
        int curChannel = goDown;
        bool canPush = true;
        while (curChannel) {
            if (isBroken[curChannel % 10]) {
                canPush = false; break;
            }
            else {
                curChannel /= 10;
            }
        }
        if (canPush) {
            under_near = goDown;
            break;
        }
        goDown--;
    }
    if (goDown != -1) {
        calculateMinCount(under_near);
    }
    // upper channel
    int upper_near = 1000000;
    int goUpper = channel;
    while (goUpper < 1000000) {
        int curChannel = goUpper;
        bool canPush = true;
        while (curChannel) {
            if (isBroken[curChannel % 10]) {
                canPush = false; break;
            }
            else {
                curChannel /= 10;
            }
        }
        if (canPush) {
            upper_near = goUpper;
            break;
        }
        goUpper++;
    }
    calculateMinCount(upper_near);
    //cout << "사용할 수 있는 숫자 조합 중 " << channel << "에 가장 가까운 숫자는 " << under_near << ", " << upper_near << "입니다\n\n";
    cout << minMoveCount << endl;
}
*/