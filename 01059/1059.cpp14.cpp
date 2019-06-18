/*
   Lucky Set이란 정수의 집합이다.

   구간 [A,B]란 A보다 크거나 같고, B보다 작거나 같은 모든 정수가 있는 구간이다. 이때, A와 B는 모두 양수이고, B는 A보다 크다.

   구간 [A,B]가 Unlucky가 되기 위해선 구간에 속한 모든 정수가 Lucky Set에 없어야 한다.

   Lucky Set과 N이 주어질 때, N을 포함하는 Unlucky 구간의 개수를 구하는 프로그램을 작성하시오.


   3 4 5 6 7 8 9 0 1
   &     &         &

*/

#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int N; cin >> N;
  set<int> helloIntegers;

  for(int i=0; i<N; i++) {
    int a; cin >> a;
    helloIntegers.insert(a);
  }

  int L; cin >> L;

  int minLeft = 0, maxRight;

  // small -> big
  for(set<int>::reverse_iterator it = helloIntegers.rbegin(); it != helloIntegers.rend(); it++) {

    if( *it <= L ) {
      minLeft = *it; break;
    } else {
      maxRight = *it;
    }
  }

  int result = (maxRight-L) * (L-minLeft) - 1;

  if( result < 0 ) result = 0;

  cout << result << endl;
}
