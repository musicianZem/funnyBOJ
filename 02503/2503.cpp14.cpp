#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <cstring>
#include <map>
#include <set>
#include <list>
using namespace std;

class BaseBall{
public :
    short baek, ship, illl;
    BaseBall(short baek = 0, short ship = 0, short illl = 0)
    : baek(baek), ship(ship), illl(illl) {}
};

list<BaseBall> canBe;

int main() {
    for (short baek = 1; baek <= 9; baek++) {
        for (short ship = 1; ship <= 9; ship++) {
            if (baek == ship) continue;
            for (short illl = 1; illl <= 9; illl++) {
                if (baek == illl || ship == illl) continue;
                canBe.push_back(BaseBall(baek, ship, illl));
            }
        }
    }

    int question; cin >> question;
    for (int i = 0; i < question; i++) {
        int guess, strike, ball; cin >> guess >> strike >> ball;
        int baek = guess / 100; guess %= 100;
        int ship = guess / 10;
        int illl = guess % 10;
        
        
        for (list<BaseBall>::iterator it = canBe.begin(); it != canBe.end();) {
            int tempStrike = 0, tempBall = 0;

            if (it->baek == baek) tempStrike++;
            else if (it->baek == ship || it->baek == illl) tempBall++;

            if (it->ship == ship) tempStrike++;
            else if (it->ship == baek || it->ship == illl) tempBall++;

            if (it->illl == illl) tempStrike++;
            else if (it->illl == baek || it->illl == ship) tempBall++;

            if (strike == tempStrike && ball == tempBall) {
                it++;
            }
            else {
                it = canBe.erase(it);
            }
        }
    }

    cout << canBe.size() << endl;
}