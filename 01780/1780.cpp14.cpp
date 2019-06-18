#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[2187][2187];
int paperCount[3];

void divide_n_conquer(int size, int pi = 0, int pj = 0) {
    int color = arr[pi][pj];
    bool isSame = true;
    for (int i = pi; i < size + pi; i++) {
        for (int j = pj; j < size + pj; j++) {
            if (color != arr[i][j]) {
                isSame = false; break;
            }
        }
        if (!isSame) break;
    }

    if (!isSame) {
        int sns = size / 3;
        int dns = sns << 1;
        divide_n_conquer(sns, pi, pj);
        divide_n_conquer(sns, pi + sns, pj);
        divide_n_conquer(sns, pi + dns, pj);
        divide_n_conquer(sns, pi, pj + sns);
        divide_n_conquer(sns, pi + sns, pj + sns);
        divide_n_conquer(sns, pi + dns, pj + sns);
        divide_n_conquer(sns, pi, pj + dns);
        divide_n_conquer(sns, pi + sns, pj + dns);
        divide_n_conquer(sns, pi + dns, pj + dns);
    }
    else {
        paperCount[color + 1] ++;
    }
}

int main() {
    int N; scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    divide_n_conquer(N);
    for (int i = 0; i < 3; i++) {
        cout << paperCount[i] << endl;
    }
}