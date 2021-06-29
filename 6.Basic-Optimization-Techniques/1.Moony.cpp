// Initial Thoughts : Looks like Maximum Sum of Subarray of Size 3
// PS : Wrong
// Actual Logic is Easier. Does not involve Sliding Window Concept. Bleh.
#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
void Onigiri(){
	int N;
	cin >> N;
	int A[N];
	for (int i=0;i<N;++i){
		cin >> A[i];
	}
	int maxSum = -1e9, currentSum;
	for (int i=1;i<N-1;++i){
		currentSum = A[i-1] + A[i] + A[i+1];
		maxSum = max (maxSum, currentSum);
	}
	// there are 2 more possibilities.
	maxSum = max (maxSum, A[0] + A[1] + A[N-1]);
	maxSum = max (maxSum, A[0] + A[N-1] + A[N-2]);
	cout << maxSum << endl;
}
int32_t main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) Onigiri();
}
