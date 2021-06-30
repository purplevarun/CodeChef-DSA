#include <bits/stdc++.h>
#define int int64_t
using namespace std;
bool hasNegative (int A[], int N){
	for (int i=0;i<N;++i){
		if (A[i] < 0)
			return true;
	}
	return false;
}
void onigiri() {
	int N, K; cin >> N >> K;
	int A[N];
	for (int i=0;i<N;++i)
		cin >> A[i];
	if (!hasNegative(A, N)){
		cout << K * accumulate (A, A + N, 0) << endl;
	}
	else {
		if (K%2 == 0){
			K = 2;
		}
		else {
			K = 3;
		}
		int B[N*K];
		for (int k=0;k<K;++k){
			
		}
	}
}
int32_t main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--){
		onigiri ();
	}
}
