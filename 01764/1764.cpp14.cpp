#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <deque>
#include <set>
using namespace std;

int main() {
    int N, M; cin >> N >> M;
    if (N > M) swap(N, M);
    set<string> heard;
    for (int i = 0; i < N; i++) {
        string person; cin >> person;
        heard.insert(person);
    }

    vector<string> dontHeardAbout;
    for (int j = 0; j < M; j++) {
        string person; cin >> person;
        set<string>::iterator it = heard.find(person);
        if (it != heard.end()) {
            dontHeardAbout.push_back(*it);
        }
    }
    sort(dontHeardAbout.begin(), dontHeardAbout.end());
    cout << dontHeardAbout.size() << endl;
    for (vector<string>::iterator it = dontHeardAbout.begin(); it != dontHeardAbout.end(); it++) {
        cout << *it << endl;
    }
}