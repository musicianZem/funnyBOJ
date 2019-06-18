#include <iostream>
#include <string>
using namespace std;
int main() {
	int R1; double S; cin >> R1 >> S;
	S *= 2;
	S -= R1;
	cout << (int) S << endl;
	return 0;
}