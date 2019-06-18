#include <stdio.h>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int arr[1000000];
int main() {
	int N; cin >> N;
	for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]);
	}
	sort(arr, arr+N);
	for(int i=0; i<N; i++) {
        printf("%d\n", arr[i]);
	}
}