#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int N; cin >> N;
	string S; cin >> S;
	int A_Scored = 0, B_Scored = 0;
	int A_Remaining = N, B_Remaining = N;
	for (int i=0;i<2*N;++i){
		if (i%2 == 0){
			if (S[i] == '1')
				A_Scored ++;
			A_Remaining --;
		}
		else {
			if (S[i] == '1')
				B_Scored ++;
			B_Remaining --;
		}
		if (A_Scored > (B_Scored + B_Remaining)){
			cout << i + 1 << '\n'; return;
		}

		if (B_Scored > (A_Scored + A_Remaining)){
			cout << i + 1 << '\n'; return;
		}
		
		if (A_Scored == B_Scored && i == 2*N-1){
			cout << i + 1 << '\n'; return;
		}
	}
	cout << -1 << '\n';
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
