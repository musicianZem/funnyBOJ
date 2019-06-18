#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Bigger {
    bool operator()(int &a, int &b) {
        return a > b;
    }
};

struct Smaller {
    bool operator()(int &a, int &b) {
        return a < b;
    }
};

int main() {
    map<int, int> q;
    
    int testCase; cin >> testCase;
    while (testCase--) {
        int T; cin >> T;
        while (T--) {
            string op; cin >> op;
            if (op=="I") {
                int inputN; cin >> inputN;
                q[inputN] += 1;
            }
            else { // "D"
                int opN; cin >> opN;
                if (q.empty()) continue;
                else if (opN == 1) { // pop max
                    map<int, int>::iterator it = q.end();
                    it--;
                    if (it->second == 1) {
                        it = q.erase(it);
                    }
                    else {
                        it->second--;
                    }
                }
                else { // pop min
                    map<int, int>::iterator it = q.begin();
                    if (it->second == 1) {
                        it = q.erase(it);
                    }
                    else {
                        it->second--;
                    }
                }
            }
        }
        if (q.empty()) {
            cout << "EMPTY\n";
        }
        else {
            map<int, int>::iterator it = q.end();
            it--;
            cout << it->first << " ";
            it = q.begin();
            cout << it->first << endl;
            q.clear();
        }
    }
}