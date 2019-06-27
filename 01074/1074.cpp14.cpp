#include <iostream>
using namespace std;

int N, r, c, cache;

int cnt;

int recursive(int si, int sj, int size) {
    if( size == 0 ) return 1;
    if( si == r && sj == c ) return 1;

    int halfSize = (1<<(size-1));
    int quadSize = halfSize * halfSize;

    //cout << "recursive("<<si<<", "<<sj<<", "<<size<<") :: half("<<halfSize<<"), quad("<<quadSize<<")\n";

    int result = 0;
    if( r < si+halfSize && c < sj+halfSize )
        return recursive( si, sj, size-1 );
    result += quadSize;

    if( r < si+halfSize )
        return result + recursive( si, sj+halfSize, size-1 );
    result += quadSize;

    if( c < sj+halfSize )
        return result + recursive( si+halfSize, sj, size-1 );
    result += quadSize;

    return result + recursive( si+halfSize, sj+halfSize, size-1 );
}

int main() {
    cin >> N >> r >> c;

    cout << recursive(0, 0, N) - 1 << endl;
}
