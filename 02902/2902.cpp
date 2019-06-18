#include <iostream>
#include <string>
using namespace std;
int main() {
	string input; cin >> input;
    int length = input.length();
    cout << input[0];
	for(int i=0; i<length; i++) {
		if(input[i] == 45) {
			cout << input[i+1];
		}
	}
	return 0;
}