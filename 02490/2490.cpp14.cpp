#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <stack>
using namespace std;

int main() {
	for(int k=0; k<3; k++) {
		int arr[4];
		int sum = 0;
		for(int i=0; i<4; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		switch( sum ) {
		case 0 :
			cout << "D" << endl;
			break;
		case 1 :
			cout << "C" << endl;
			break;
		case 2 :
			cout << "B" << endl;
			break;
		case 3 :
			cout << "A" << endl;
			break;
		case 4 :
			cout << "E" << endl;
			break;
		}
	}
	return 0;
}