#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri(){
	int G; cin >> G;
	int I, N, Q;
	while (G--){
		cin >> I >> N >> Q;
		if (N%2 == 0 || I == Q)
			cout << N/2 << endl;
		else 
			cout << N/2 + 1 << endl;
	}
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
	cin >> t;
	while (t--){
		onigiri();
	}
}
