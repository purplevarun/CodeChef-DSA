#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int N; cin >> N;
	int cnt = 0;
	while (N/5 > 0){
		cnt += N/5;
		N/=5;
	}
	cout << cnt << endl;
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
