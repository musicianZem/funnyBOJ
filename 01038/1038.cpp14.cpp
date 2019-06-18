#include <iostream>
#include <vector>
using namespace std;

class myInt {
public :
    long long num, jarisu, firstInt;
    myInt(int n) {
        if (n == 0) {
            num = 0;
            jarisu = 1;
            firstInt = 0;
        }
        else {
            num = n;
            jarisu = 0;
            while (n > 0) {
                jarisu++;
                firstInt = n % 10;
                n /= 10;
            }
        }
    }
    myInt(long long n) {
        if (n == 0) {
            num = 0;
            jarisu = 1;
            firstInt = 0;
        }
        else {
            num = n;
            jarisu = 0;
            while (n > 0) {
                jarisu++;
                firstInt = n % 10;
                n /= 10;
            }
        }
    }
};

vector<myInt> lows;

int main() {
    for (int i = 0; i < 10;i++) {
        lows.push_back(myInt( i ));
    }
    for (int jarisu = 2; jarisu <= 10; jarisu++) {
        for (int si = jarisu - 1; si < 10; si++) {
            long long num = si;
            for (int i = 1; i < jarisu; i++) num *= 10;
            //cout << jarisu << " " << si << " " << num << endl;
            vector<long long> temp;
            for (vector<myInt>::iterator it = lows.begin(); it != lows.end(); it++) {
                if (it->jarisu == jarisu) break;
                else if (it->firstInt < si && it->jarisu == jarisu - 1) {
                    temp.push_back(num + it->num);
                }
            }
            for (vector<long long>::iterator it = temp.begin(); it != temp.end(); it++) {
                lows.push_back(myInt(*it));
                //cout << jarisu << " " << si << " " << num << " " << *it << endl;
            }
        }
    }
    int myIntCount = lows.size();
    
    int n; cin >> n;

    if (n >= myIntCount) {
        cout << -1 << endl;
    }
    else {
        cout << lows[n].num << endl;
    }
}