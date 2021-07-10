#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void Onigiri() {
	int N, M; cin >> N >> M;
	int A[N], B[M];
	for (int i=0;i<N;++i) 
		cin >> A[i]; 
	for (int i=0;i<M;++i) 
		cin >> B[i];
	vector <pair <int, int>> Ans;
	int maxPosA = max_element (A, A+N) - A; // position of max element of A
	int minPosB = min_element (B, B+M) - B; // position of min element of B
	for (int i=0;i<M;++i){
		Ans.push_back ({maxPosA, i}); // pairing maxA with all elements of B
	}
	for (int j=0;j<N;++j){
		if (j != maxPosA)
		Ans.push_back ({j, minPosB}); // pairing all elements of A with minB
	}
	for (auto i:Ans)
		cout << i.first << ' ' << i.second << '\n';
}
int32_t main () {
	#ifndef VarunDebug
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	#endif
	int t = 1;
	//cin >> t;
	while (t--){
		#ifdef VarunDebug
		if (t)
		cout<<"-----------------"<<'\n';
		#endif
		Onigiri ();
	}
}
