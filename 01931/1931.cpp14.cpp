#include <iostream>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <algorithm>
using namespace std;
class Talk {
public :
	int startTime, endTime;
	Talk(int st = 0, int et = 0) {
		startTime = st;
		endTime = et;
	}
	friend bool operator < ( const Talk &t1, const Talk &t2 ) {
		if( t1.endTime != t2.endTime ) {
			return t1.endTime < t2.endTime;
		} else {
			return t1.startTime < t2.startTime;
		}
	}
};
Talk talks[100000];
int main() {
	int n; scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %d", &talks[i].startTime, &talks[i].endTime);
	}
	sort(talks, talks+n);
	//for(int i=0; i<n; i++) {
	//	cout << talks[i].startTime << " " << talks[i].endTime << endl;
	//}

	int lastTime = -1, countTalks = 0;
	for(int i=0; i<n; i++) {
		if( talks[i].startTime >= lastTime ) {
			lastTime = talks[i].endTime;
			countTalks++;
			//cout << talks[i].startTime << " " << talks[i].endTime << endl;
		}
	}

	cout << countTalks << endl;
}