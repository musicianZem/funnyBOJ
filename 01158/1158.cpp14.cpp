#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

int main() {
    int N, K; cin >> N >> K;

    list<int> people;
    for(int i=1; i<=N; i++) {
        people.push_back(i);
    }   

    cout << "<";
    list<int>::iterator it = people.begin();
    while( N ) { 
        for(int i=1; i<K; i++) {
            it++;
            if( it == people.end() ) it = people.begin();
        }
        cout << *it ;

        if( N != 1 ) cout << ", ";
        else cout << ">\n";

        N--;
        it = people.erase(it);
        if( it == people.end() ) it = people.begin();
    }


}
