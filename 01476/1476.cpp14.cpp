#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
bool rooms[101];
int main() {
    const int moduleE = 15;
    const int moduleS = 28;
    const int moduleM = 19;
    int E, S, M; cin >> E >> S >> M;
    int year = 1;
    int guessE = 1, guessS = 1, guessM = 1;
    
    while (guessE != E || guessS != S || guessM != M) {
        year++;
        guessE++;   if (guessE > moduleE) guessE = 1;
        guessS++;   if (guessS > moduleS) guessS = 1;
        guessM++;   if (guessM > moduleM) guessM = 1;
    }
    cout << year << endl;
}