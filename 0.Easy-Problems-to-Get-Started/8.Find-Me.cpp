#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int N, K; cin >> N >> K;
	int A[N];
	for (int i=0;i<N;++i)
		cin >> A[i];
	if (count (A, A+N, K))
		cout << 1 << endl;
	else 
		cout << -1 << endl;
}
