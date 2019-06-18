#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <stack>
#include <iterator>
using namespace std;

int room_garo[102][102];
int room_sero[102][102];

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		for (int j = 0; j < N; j++) {
			if (str[j] == '.') {
				room_garo[i+1][j + 1] = room_sero[i+1][j + 1] = 1;
			}
		}
	}


	int garoCount = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (room_garo[i][j] && room_garo[i][j + 1]) {
				garoCount++;
				int remove_j = j;
				while (remove_j <= N && room_garo[i][remove_j]) {
					room_garo[i][remove_j++] = 0;
				}
			}
		}
	}

	int seroCount = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (room_sero[i][j] && room_sero[i + 1][j]) {
				seroCount++;
				int remove_i = i;
				while (remove_i <= N && room_sero[remove_i][j]) {
					room_sero[remove_i++][j] = 0;
				}
			}
		}
	}

	cout << garoCount << " " << seroCount << endl;
}