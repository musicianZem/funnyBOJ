#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <set>
using namespace std;

class myBigInt {
public:
    static const int cutN;
    deque<int> num;
    myBigInt() {}
    void update() {
        int plusN = 0;
        for (deque<int>::reverse_iterator it = num.rbegin(); it != num.rend(); it++) {
            *it += plusN;
            plusN = *it / cutN;
            *it %= cutN;
        }
        if (plusN) num.push_front(plusN);
    }

    friend ostream& operator <<(ostream &out, myBigInt &o) {
        for (deque<int>::iterator it = o.num.begin(); it != o.num.end(); it++) {
            int copyCut = cutN / 10;
            if (it != o.num.begin()) {
                while (copyCut > *it) {
                    out << 0;
                    copyCut /= 10;
                }
            }
            out << *it;
        }

        return out;
    }

    friend myBigInt operator +(myBigInt& o1, myBigInt& o2) {
        myBigInt *returnBigInt = new myBigInt();
        deque<int>::reverse_iterator o1it = o1.num.rbegin();
        deque<int>::reverse_iterator o2it = o2.num.rbegin();
        while (o1it != o1.num.rend() && o2it != o2.num.rend()) {
            returnBigInt->num.push_front(*o1it + *o2it);
            o1it++; o2it++;
        }
        
        if (o1it == o1.num.rend()) {
            while (o2it != o2.num.rend()) {
                returnBigInt->num.push_front(*o2it);
                o2it++;
            }
        }
        else if (o2it == o2.num.rend()) {
            while (o1it != o1.num.rend()) {
                returnBigInt->num.push_front(*o1it);
                o1it++;
            }
        }
        returnBigInt->update();
        return *returnBigInt;
    }
};
const int myBigInt::cutN = 100000000;

myBigInt fibonacci[10001];

int main() {
    fibonacci[0].num.push_back(0);
    fibonacci[1].num.push_back(1);
    int n; cin >> n;
    for (int i = 2; i <= n; i++) {
        fibonacci[i] = fibonacci[i - 2] + fibonacci[i - 1];
    }
    cout << fibonacci[n];
}