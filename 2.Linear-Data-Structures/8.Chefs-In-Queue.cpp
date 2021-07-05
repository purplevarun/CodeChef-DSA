#include <bits/stdc++.h>
#define int int64_t
using namespace std;
const int mod = 1e9 + 7;
void Onigiri () {
	int N, K;
	cin >> N >> K;
	int A[N];
	for (int i=0;i<N;++i) 
		cin >> A[i];
	stack <pair <int, int>> st;
	int Ans = 1;
	for (int i=0;i<N;++i){
		while (!st.empty() && A[i] < st.top().first){
			Ans *= (i - st.top().second + 1);
			Ans %= mod;
			st.pop();
		}
		st.push ({A[i], i});
	}
	cout << Ans << '\n';
}
int32_t main (){
	#ifndef VarunDebug
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	#endif

	int t = 1;
	// cin >> t;

	for (int i=0;i<t;++i)
		Onigiri();
}