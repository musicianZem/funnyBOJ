#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

typedef struct TEAMS{
public :
	int jechulCount;
	int getScore;
	int problem[100];
	int whenJechul;
	int teamNumber;
}TEAMS;
bool myCompare( const TEAMS& T1, const TEAMS& T2 ){
	if( T1.getScore > T2.getScore ) {
		return true;
	} else if( T1.getScore == T2.getScore ) {
		if( T1.jechulCount < T2.jechulCount ) {
			return true;
		} else if( T1.jechulCount == T2.jechulCount ) {
			return T1.whenJechul < T2.whenJechul;
		} else return false;
	} else return false;
}
int main() {
	int testCase; scanf("%d", &testCase);
	while( testCase-- ) {
		vector<TEAMS> t(100);
		for(int i=0; i<100; i++) {
			memset(t[i].problem, 0, sizeof(t[i].problem));
			t[i].getScore = 0;
			t[i].jechulCount = 0;
			t[i].whenJechul = 10000;
			t[i].teamNumber = i+1;
		}
		int teamCount, problemCount, MyteamID, logEntry;
		scanf("%d %d %d %d", &teamCount, &problemCount, &MyteamID, &logEntry);

		for(int i=0; i<logEntry; i++) {
			int id, num, score; scanf("%d %d %d", &id, &num, &score);
			if( t[id-1].problem[num-1] < score ) {
				t[id-1].getScore -= t[id-1].problem[num-1];
				t[id-1].getScore += score;
				t[id-1].problem[num-1] = score;
			}
			t[id-1].jechulCount++;
			t[id-1].whenJechul = i;
		}
		sort(t.begin(), t.begin()+teamCount, myCompare);

		for(int i=0; i<teamCount; i++) {
			//cout << t[i].teamNumber << "team " << t[i].getScore << "점 제출횟수:" << t[i].jechulCount << " 마지막:" << t[i].whenJechul << endl;
			if( MyteamID == t[i].teamNumber ) {
				printf("%d\n", i+1); break;
			}
		}
	}
}