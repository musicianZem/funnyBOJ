#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <ctime>
using namespace std;
int main() {
    struct tm* datetime;
    time_t t;
    t = time(NULL);
    datetime = localtime(&t);
    cout << datetime->tm_year + 1900 << "-";
    if (datetime->tm_mon < 10) cout << 0;
    cout << datetime->tm_mon+1 << "-";
    if (datetime->tm_mday < 10) cout << 0;
    cout << datetime->tm_mday << endl;
}