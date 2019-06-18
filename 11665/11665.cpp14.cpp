#include <iostream>
using namespace std;
#define MAXN 1000
#define POINTCOUNT 6

int N;
int Rect[ MAXN ][ POINTCOUNT ];

int Answer;
int AnswerPoint[ POINTCOUNT ];

int main() {
	int t, i, j;

	cin >> N; 

	for(i=0; i<N; i++) {
		for(j=0; j<POINTCOUNT; j++) {
			cin >> Rect[i][j];
		}
	}
		
	AnswerPoint[0] = Rect[0][0];
	AnswerPoint[1] = Rect[0][1];
	AnswerPoint[2] = Rect[0][2];
	AnswerPoint[3] = Rect[0][3];
	AnswerPoint[4] = Rect[0][4];
	AnswerPoint[5] = Rect[0][5];

	// check collision AABB
	for(i=1; i<N; i++) {
		// A.max < B.min || A.min > B.max : no-collision
		if( AnswerPoint[3] < Rect[i][0] || AnswerPoint[0] > Rect[i][3] ) {
			Answer = -1; break;
		}
		if( AnswerPoint[4] < Rect[i][1] || AnswerPoint[1] > Rect[i][4] ) {
			Answer = -1; break;
		}
		if( AnswerPoint[5] < Rect[i][2] || AnswerPoint[2] > Rect[i][5] ) {
			Answer = -1; break;
		}

		// update Min Values
		if( AnswerPoint[0] < Rect[i][0] ) { AnswerPoint[0] = Rect[i][0]; }
		if( AnswerPoint[1] < Rect[i][1] ) { AnswerPoint[1] = Rect[i][1]; }
		if( AnswerPoint[2] < Rect[i][2] ) { AnswerPoint[2] = Rect[i][2]; }

		// update Max Values
		if( AnswerPoint[3] > Rect[i][3] ) { AnswerPoint[3] = Rect[i][3]; }
		if( AnswerPoint[4] > Rect[i][4] ) { AnswerPoint[4] = Rect[i][4]; }
		if( AnswerPoint[5] > Rect[i][5] ) { AnswerPoint[5] = Rect[i][5]; }
	}

	if( Answer == -1 ) {
		for(i=0; i<POINTCOUNT; i++) {
			AnswerPoint[i] = 0;
		}
	}

	Answer = (AnswerPoint[3]-AnswerPoint[0]) * (AnswerPoint[4]-AnswerPoint[1]) * (AnswerPoint[5]-AnswerPoint[2]);
		
	cout << Answer;

	return 0;
}