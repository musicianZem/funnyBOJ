#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

unsigned int cache[100000];

void fillCache() {
    unsigned int beforeN = 0;

    uint32_t i;
    for(i = 1; i*i>=0; i++) {
        if( i*i < beforeN ) break;
        cache[i] = i*i;
        beforeN = cache[i];
    }   

    cache[i] = 0;
}

int main() {
    cout << ".  .   ." << endl;
    cout << "|  | _ | _. _ ._ _  _" << endl;
    cout << "|/\\|(/.|(_.(_)[ | )(/." << endl;
}
