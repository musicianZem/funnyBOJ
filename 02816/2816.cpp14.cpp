#include <iostream>
#include <string>
using namespace std;
int main(){
	int n; cin >> n;
	int k1, k2;
	for(int i=0; i<n; i++) {
		string t; cin >> t;
		if(t.compare("KBS1")==0)
			k1 = i;
		else if(t.compare("KBS2")==0)
			k2 = i;
	}
	if (k1 > k2) k2++;
	for(int i=0; i<k1; i++) cout << 1;
	for(int i=0; i<k1; i++) cout << 4;
	if( k2 != 1 ){
		for(int i=1; i<=k2; i++) cout << 1;
		for(int i=1; i<k2; i++) cout << 4;
	}}