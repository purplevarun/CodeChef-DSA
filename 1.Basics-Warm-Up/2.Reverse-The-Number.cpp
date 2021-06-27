#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int T, N;
int Reverse (int N){
	int X = 0;
	while (N > 0){
		X = X*10 + N%10;
		N/=10;
	}
	return X;
}
int32_t main () {
	cin >> T;
	while (T--){
		cin >> N;
		cout << Reverse (N) << endl;
	}
}
