#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cost[1001];
vector< vector<int> > haveTo;


int main() {
  int testCase; scanf("%d", &testCase);
  while( testCase-- ) {
    int N, K; scanf("%d %d", &N, &K);
    for(int i=1; i<=N; i++) {
      scanf("%d", &cost[i]);
    }

    haveTo.clear();
    haveTo.resize( N+1 );

    for(int i=0; i<K; i++) {
      int bef, aft; scanf("%d %d", &bef, &aft);
      haveTo[aft].push_back(bef);
    }

    int W; scanf("%d", &W);


    bool isFinished = false;

    int totalCostTime = 0;
    while( !isFinished ) {
      if( !cost[W] ) break;
      isFinished = true;

      vector<int> eraseList;
      int minTime = 100001;
      for(int i=1; i<=N; i++) {
        if( !cost[i] ) continue;
        isFinished = false;

        for(vector<int>::iterator it = haveTo[i].begin(); it != haveTo[i].end(); ) {
          if( cost[ *it ] ) {
            it++;
          } else {
            it = haveTo[i].erase(it);
          }
        }

        if( haveTo[i].empty() ) {
          minTime = min(minTime, cost[i]);
          eraseList.push_back( i );
        }
      }

      for(vector<int>::iterator it = eraseList.begin(); it != eraseList.end(); it++) {
        cost[ *it ] -= minTime;
      }
      if( !isFinished ) 
        totalCostTime += minTime;

    }

    // print result
    cout << totalCostTime << endl;
  }
}
