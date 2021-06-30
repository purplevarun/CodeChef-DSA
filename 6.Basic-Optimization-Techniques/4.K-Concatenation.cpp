#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int Kadane (int A[], int N) {
	int currentSum = 0, maxSum = -1e9;
	for (int i=0;i<N;++i){
		currentSum += A[i];
		maxSum = max (maxSum, currentSum);
		if (currentSum < 0) currentSum = 0;
	}
	return maxSum;
}
int onigiri() {
	int N, K; cin >> N >> K;
	int A[N];
	int Sum = 0;
	for (int i=0;i<N;++i){
		cin >> A[i];
		Sum += A[i];
	}
	if (K == 1){
		return Kadane(A, N);
	}
	// B is just A appended with A
	int B[N*2];
	for (int i=0;i<2;++i){
		for (int j=0;j<N;++j){
			B[i*N+j] = A[j];
		}
	}

	if (Sum < 0)
		return Kadane(B, N*2);
	else
		// split K arrays into 2(1 at start and 1 at end) and K-2(in between them)
		return Kadane(B, N*2) + (K-2) * Sum;
}
int32_t main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--){
		cout << onigiri () << endl;
	}
}
