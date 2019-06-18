#include <iostream>
#include <string>
using namespace std;

const int aLEFT = 6;
const int UPPER = 0;
const int RIGHT = 2;

int disk[4][8];
int isTurned[4];

void checkTurned(int cur, int clockWise) {
    int nextClockWise = clockWise * -1;
    isTurned[cur] = clockWise;
    if (cur != 0) {
        if (disk[cur][aLEFT] != disk[cur - 1][RIGHT] && isTurned[cur - 1] == 0) {
            checkTurned(cur - 1, nextClockWise);
        }
    }
    if (cur != 3) {
        if (disk[cur][RIGHT] != disk[cur + 1][aLEFT] && isTurned[cur + 1] == 0) {
            checkTurned(cur + 1, nextClockWise);
        }
    }
}

void turnLeft(int cur) {
    int temp = disk[cur][0];
    for (int i = 1; i < 8; i++) {
        disk[cur][i - 1] = disk[cur][i];
    }
    disk[cur][7] = temp;
}

void turnRight(int cur) {
    int temp = disk[cur][7];
    for (int i = 6; i >= 0; i--) {
        disk[cur][i + 1] = disk[cur][i];
    }
    disk[cur][0] = temp;
}

void turnDisks() {
    for (int i = 0; i < 4; i++) {
        switch (isTurned[i]) {
        case -1: turnLeft(i); break;
        case 0: break;
        case 1: turnRight(i); break;
        }
    }
}

int main() {
    for (int i = 0; i < 4; i++) {
        string status; cin >> status;
        for (int j = 0; j < 8; j++) {
            disk[i][j] = status[j] - '0';
        }
    }

    int turnCount; cin >> turnCount;
    for (int i = 0; i < turnCount; i++) {
        int turnObject, turnClockWise;
        cin >> turnObject >> turnClockWise;
        for (int j = 0; j < 4; j++) isTurned[j] = 0;
        checkTurned(turnObject - 1, turnClockWise);
        turnDisks();
    }

    int sumResult = 0;
    for (int i = 3; i >= 0; i--) {
        sumResult <<= 1;
        sumResult += disk[i][UPPER];
    }
    cout << sumResult << endl;
}