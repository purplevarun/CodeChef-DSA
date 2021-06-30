#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int x; cin >> x;
	int cnt = 0;
	for (int i=1;i<=700 && i < x; i++){
		cnt += sqrt(x - i);
	}
	cout << cnt << '\n';
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
