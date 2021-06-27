// Initial Thoughts : Looks like Maximum Sum of Subarray of Size 3
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
	int K = 3;
	int maxSum = 0;
	// first K students
	for (int i=0;i<K;++i){
		maxSum += A[i];
	}
	int currentSum = maxSum;
	for (int i=K;i<N;++i){
		
	}
}
int32_t main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) Onigiri();
}
