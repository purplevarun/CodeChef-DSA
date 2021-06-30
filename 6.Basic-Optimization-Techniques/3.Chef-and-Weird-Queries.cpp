#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int x; cin >> x;
	int cnt = 0;
	for (int i=1;i*i<=x;++i){
		for (int j=1;j<=700;++j){
			if (i*i + j <= x)
				cnt ++;
		}
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
