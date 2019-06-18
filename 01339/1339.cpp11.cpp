#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <algorithm>
using namespace std;
typedef struct {
	char ch;
	int priority;
}Alpha;
bool operator < ( Alpha& a1, Alpha& a2 ) {
	if( a1.priority < a2.priority ) return false;
	else if( a1.priority == a2.priority ) {
		return a1.ch > a2.ch;
	} else {
		return true;
	}
}
bool operator == ( Alpha& a1, char &a2 ) {
	return a1.ch == a2;
}
int main() {
	int N; cin >> N;
	string inputString;
	vector<string> strings;
	map<char, int> bestCount;

	while( N-- ) {
		cin >> inputString;
		int length = inputString.length();
		for(int i=0; i<length; i++) {
			bestCount[ inputString[i] ] += (int)pow(10.0, length-i);
		}
		while( inputString.length() != 8 ) {
			inputString = "0" + inputString;
		}
		strings.push_back( inputString );
	}
	priority_queue<int> maximum;
	vector<Alpha> forSort;
	for(map<char,int>::iterator it = bestCount.begin(); it != bestCount.end(); it ++ ) {
		Alpha newAlpha;
		newAlpha.ch = it->first;
		newAlpha.priority = it->second;
		forSort.push_back( newAlpha );
	}
	sort( forSort.begin(), forSort.end() );
	for(int i=0; i<forSort.size(); i++) {
		forSort[i].priority = 9-i;
		//cout << forSort[i].ch << " " << forSort[i].priority << endl ;
	}
	for(int i=0; i<forSort.size(); i++) {
		for(int j=0; j<strings.size(); j++) {
			for(int k=0; k<strings[j].size(); k++) {
				if(strings[j][k] == forSort[i].ch) {
					switch( forSort[i].priority ) {
					case 9 :
						strings[j][k] = '9'; break;
					case 8 :
						strings[j][k] = '8'; break;
					case 7 :
						strings[j][k] = '7'; break;
					case 6 :
						strings[j][k] = '6'; break;
					case 5 :
						strings[j][k] = '5'; break;
					case 4 :
						strings[j][k] = '4'; break;
					case 3 :
						strings[j][k] = '3'; break;
					case 2 :
						strings[j][k] = '2'; break;
					case 1 :
						strings[j][k] = '1'; break;
					case 0 :
						strings[j][k] = '0'; break;
					default :
						break;
					}
				}
			}
		}
	}
	int result = 0;
	for(int i=0; i<strings.size(); i++) result += stoi( strings[i] );
	cout << result << endl ;
	return 0;
}