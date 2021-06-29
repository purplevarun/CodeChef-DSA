#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void Onigiri() {
	int N; cin >> N;
	int A[N];
	for (int i=0;i<N;++i)
		cin >> A[i];
	int prefixSum[N], suffixSum[N];
	int sum1 = 0, sum2 = 0;
	for (int i=0;i<N;++i){
		sum1 += A[i];
		sum2 += A[N-i-1];
		prefixSum[i] = sum1;
		suffixSum[i] = sum2;
	}
	reverse (suffixSum, suffixSum + N);
	int Sum[N];
	for (int i=0;i<N;++i){
		Sum[i] = prefixSum[i] + suffixSum[i];
	}
	/* for (int i:prefixSum) cout << i << ", "; cout << endl; */
	/* for (int i:suffixSum) cout << i << ", "; cout << endl; */
	int val = *min_element(Sum, Sum + N);
	for (int i=0;i<N;++i){
		if (Sum[i] == val){
			cout << i + 1 << endl;
			return;
		}
	}
}
int32_t main () {
	int t = 1;
	cin >> t;
	while (t--){
		Onigiri();
	}	
}
