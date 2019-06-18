#include <iostream>
#include <string>
using namespace std;

bool current[6];
bool restore[6];

int main() {
    string sound; cin >> sound;
    int soundLength = sound.length();
    if( sound[0] == '1' ) {
        restore[1] = true;
    } else {
        restore[5] = true;
    }


    for(int i=1; i<soundLength; i++) {
        current[0] = sound[i] == '1' && (restore[3] || restore[4] || restore[5]);
        current[1] = sound[i] == '1' && (restore[0]              );
        current[2] = sound[i] == '0' && (restore[1]              );
        current[3] = sound[i] == '0' && (restore[2] || restore[3]);
        current[4] = sound[i] == '1' && (restore[3] || restore[4]);
        current[5] = sound[i] == '0' && (restore[0]              );

        for(int j=0; j<6; j++) {
            restore[j] = current[j];
        }
    }

    if( restore[0] ) {
        cout << "SUBMARINE\n";
    } else {
        cout << "NOISE\n";
    }
}
