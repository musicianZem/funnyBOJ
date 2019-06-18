#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool blackList[51];

int main() {
  int num, party, know; cin >> num >> party >> know;
  for(int i=0; i<know; i++) {
    int knowPerson; cin >> knowPerson;
    blackList[knowPerson] = 1;
  }

  vector<vector<int>> partyList(party);
  vector<bool> blackParty(party, 0);

  for(int i=0; i<party; i++) {
    int participate; cin >> participate;
    for(int j=0; j<participate; j++) {
      int t; cin >> t;
      partyList[i].push_back(t);
    }
  }


  while( 1 ) {
    bool checkAll = true;
    for(int i=0; i<party; i++) {

      bool hasBlackPerson = false;
      if( !blackParty[i] ) {
        for(vector<int>::iterator it = partyList[i].begin(); it != partyList[i].end(); it++) {
          if( blackList[*it] ) {
            hasBlackPerson = true;
            checkAll = false;
          }
        }

        if( hasBlackPerson ) {
          blackParty[i] = true;
          for(vector<int>::iterator it = partyList[i].begin(); it != partyList[i].end(); it++) {
            blackList[*it] = true;
          }
        }
      }
    }

    if(checkAll) break;
  }

  int cnt = 0;
  for(int i=0; i<party; i++) {
    if( !blackParty[i] ) {
      cnt++;
    }
  }
  cout << cnt << endl;

}
