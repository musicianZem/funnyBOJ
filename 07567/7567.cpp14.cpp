#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;
bool rooms[101];
int main() {
    string dishShape; cin >> dishShape;
    int dishCount = dishShape.length();
    int totalLength = 10;
    for (int i = 1; i < dishCount; i++) {
        if (dishShape[i - 1] == dishShape[i]) totalLength += 5;
        else totalLength += 10;
    }
    cout << totalLength << endl;
}