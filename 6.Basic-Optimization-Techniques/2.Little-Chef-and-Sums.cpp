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
		suffixSum[N-i-1] = sum2;
	}
	int Sum[N];
	for (int i=0;i<N;++i){
		Sum[i] = prefixSum[i] + suffixSum[i];
	}
	
	int val = *min_element(Sum, Sum + N);
	for (int i=0;i<N;++i){
		if (Sum[i] == val){
			cout << i + 1 << "\n";
			return;
		}
	}
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--){
		Onigiri();
	}	
}
