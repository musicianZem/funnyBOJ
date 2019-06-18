#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
	string original; cin >> original;
	int originalSize = original.size();

	string newString = "";
	newString.append( original.rbegin(), original.rend() );
	//cout << newString << endl;
	
	int startIndex = 0;
	int size = original.size();
	while( true ) {
		bool flag = true;
		for(int i=startIndex, j=0; i<size; i++, j++) {
			//cout << "ori["<<i<<"]="<<original[i] << endl;
			//cout << "new["<<j<<"]="<<newString[j]<<endl<<endl;
			if( original[i] != newString[j] ) {
				flag = false;
				break;
			}
		}

		if( !flag ) {
			startIndex++;
		} else {
			break;
		}
	}

	cout << size + startIndex << endl;
	return 0;
}