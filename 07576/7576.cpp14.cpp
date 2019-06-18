#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

typedef struct {
    int i, j;
} MyIndex ;
int boxWidth, boxHeight;
int box[1002][1002];
queue<MyIndex> ik_tomato;

void getBoxStatus() {
    cin >> boxWidth >> boxHeight;
    for (int i = 0; i < boxHeight; i++) {
        for (int j = 0; j < boxWidth; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) 
                ik_tomato.push(MyIndex{ i, j });
        }
    }
}

int main() {
    getBoxStatus();
    while (!ik_tomato.empty()) {
        int i = ik_tomato.front().i;
        int j = ik_tomato.front().j;
        ik_tomato.pop();

        if (i != 0) {
            if (box[i - 1][j] == 0) {
                ik_tomato.push(MyIndex{ i - 1, j });
                box[i - 1][j] = box[i][j] + 1;
            }
        }
        if (i != boxHeight - 1) {
            if (box[i + 1][j] == 0) {
                ik_tomato.push(MyIndex{ i + 1, j });
                box[i + 1][j] = box[i][j] + 1;
            }
        }
        if (j != 0) {
            if (box[i][j-1] == 0) {
                ik_tomato.push(MyIndex{ i , j-1 });
                box[i ][j-1] = box[i][j] + 1;
            }
        }
        if (j != boxWidth-1) {
            if (box[i][j+1] == 0) {
                ik_tomato.push(MyIndex{ i , j + 1 });
                box[i][j + 1] = box[i][j] + 1;
            }
        }
    }

    int maxDay = 1;
    bool cant_ik = false;
    for (int i = 0; i < boxHeight; i++) {
        for (int j = 0; j < boxWidth; j++) {
            maxDay = max(maxDay, box[i][j]);
            if (box[i][j] == 0) {
                cant_ik = true; break;
            }
        }
        if (cant_ik) break;
    }

    if (cant_ik) maxDay = 0;
    cout << maxDay - 1 << endl;
}