#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
	int testCase; scanf("%d", &testCase);
	while( testCase -- ) {
		int startX, startY, endX, endY;
		scanf("%d %d %d %d", &startX, &startY, &endX, &endY);

		int circleCount; scanf("%d", &circleCount);

		int coverCount = 0;
		for(int i=0; i<circleCount; i++) {
			int x, y, z; scanf("%d %d %d", &x, &y, &z);
			int radius = z * z;

			int distX = startX-x;
			int distY = startY-y;
			int distance = (distX * distX) + (distY * distY);
			
			bool isCoveredStartPoint = false;
			if( distance <= radius ) {
				isCoveredStartPoint = true;
			}

			distX = endX - x;
			distY = endY - y;
			distance = (distX * distX) + (distY * distY);

			bool isCoveredEndPoint = false;
			if( distance <= radius ) {
				isCoveredEndPoint = true;
			}

			if( isCoveredEndPoint != isCoveredStartPoint ) {
				coverCount++;
			}
		}
		cout << coverCount << endl;
	}
    
    return 0;
}