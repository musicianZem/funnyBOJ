#include <iostream>
#include <string>
#include <map>
using namespace std;
void toLower( string& a ) {
	int l = a.length();
	for(int i=0; i<l; i++) {
		if( a[i] >= 'A' && a[i] <= 'Z' ) {
			a[i] -= 'A'-'a';
		}
	}
}
int main( void ) {
	string a1, a2, a3; cin >> a1 >> a2 >> a3;
	toLower(a1);toLower(a2);toLower(a3);
	map<string, int> value;
	value.insert( pair<string, int>("black", 0) );
	value.insert( pair<string, int>("brown", 1) );
	value.insert( pair<string, int>("red",   2) );
	value.insert( pair<string, int>("orange",3) );
	value.insert( pair<string, int>("yellow",4) );
	value.insert( pair<string, int>("green", 5) );
	value.insert( pair<string, int>("blue",  6) );
	value.insert( pair<string, int>("violet",7) );
	value.insert( pair<string, int>("grey",  8) );
	value.insert( pair<string, int>("white", 9) );
	
	int R = 0;
	R += value[a1];
	R *= 10;
	R += value[a2];

	int N = value[ a3 ];
	
	cout << R;
	if( R != 0 ) {
		while(N--) cout << "0";
	}
	return 0;
}