#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
using namespace std;

vector<string> inpTree;

class TreeNode {
public:
    int isPerfect;
    TreeNode *LU, *RU, *LD, *RD;
    TreeNode() {
        LU = RU = LD = RD = NULL;
        isPerfect = -1;
    }
    void makeNew() {
        LU = new TreeNode();
        RU = new TreeNode();
        LD = new TreeNode();
        RD = new TreeNode();
    }
    void print() {
        if (isPerfect != -1) {
            cout << isPerfect;
        }
        else {
            cout << '(';
            LU->print();
            RU->print();
            LD->print();
            RD->print();
            cout << ')';
        }
    }
};

void divide_n_conquer(TreeNode *node, int size, int pi = 0, int pj = 0) {
    char pixel = inpTree[pi][pj];
    int pixelNum = 1;
    if (pixel == '0') pixelNum = 0;

    bool isSame = true;
    for (int i = pi; i < size + pi; i++) {
        for (int j = pj; j < size + pj; j++) {
            if (inpTree[i][j] != pixel) {
                isSame = false;
                break;
            }
        }
        if (!isSame) break;
    }

    if (isSame) {
        node->isPerfect = pixelNum;
    }
    else {
        node->makeNew();
        int nextSize = size / 2;
        divide_n_conquer(node->LU, nextSize, pi, pj);
        divide_n_conquer(node->RU, nextSize, pi, pj + nextSize);
        divide_n_conquer(node->LD, nextSize, pi + nextSize, pj);
        divide_n_conquer(node->RD, nextSize, pi + nextSize, pj + nextSize);
    }
}

int main() {
    int treeSize; cin >> treeSize;
    for (int i = 0; i < treeSize; i++) {
        string treeLine; cin >> treeLine;
        inpTree.push_back(treeLine);
    }

    TreeNode *node = new TreeNode();

    divide_n_conquer(node, treeSize);

    node->print();
}