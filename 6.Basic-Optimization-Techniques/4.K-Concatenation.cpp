#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int Kadane (vector<int> A, int N) {
	int currentSum = 0, maxSum = -1e9;
	for (int i=0;i<N;++i){
		currentSum += A[i];
		maxSum = max (maxSum, currentSum);
		if (currentSum < 0) currentSum = 0;
	}
	return maxSum;
}
void onigiri() {
	int N, K; cin >> N >> K;
	int A[N];
	for (int i=0;i<N;++i)
		cin >> A[i];
	vector <int> B;
	for (int k=0;k<min(K,(int)1e3);++k){
		for (int i=0;i<N;++i){
			B.push_back(A[i]);
		}
	}
	cout << Kadane (B, N*K) << endl;
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
