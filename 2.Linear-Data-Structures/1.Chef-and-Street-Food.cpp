#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int N, S, P, V;
	cin >> N;
	int Max = -1e9;
	while (N --){
		cin >> S >> P >> V;
		int customers = P / (S + 1);
		int Sales = customers * V;
		Max = max (Max, Sales);
	}
	cout << Max << '\n';
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
