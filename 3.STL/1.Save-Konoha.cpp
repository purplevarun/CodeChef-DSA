#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void dbg (auto S){
	cout << "Set : ";
	for (int i:S) 
		cout << i << ' '; 
	cout << '\n';
}
void Onigiri () {
	int N, Z; cin >> N >> Z;
	int A[N];
	set<int, greater<int>> S;
	for (int i=0;i<N;++i){
		cin >> A[i];
		S.insert (A[i]);
	}
	int cntr = 0;
	while (Z > 0 && *S.begin() > 0){
		cntr++;
		int curr = *S.begin();
		// printf ("Z = %lld and curr = %lld\n", Z, curr);
		// dbg (S);
		Z -= curr;
		S.erase(S.begin());
		S.insert (curr/2);
	}
	cout << cntr << '\n';

}
int32_t main (){
	#ifndef VarunDebug
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	#endif

	int t = 1;
	cin >> t;

	for (int i=0;i<t;++i)
		Onigiri();
}