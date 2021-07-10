#include <bits/stdc++.h>
#define int long long
using namespace std;
void Onigiri (){
	int N, M, K;
	cin >> N >> M >> K;
	set <pair <int, int>> dp;
	for (int i=0;i<K;++i){
		int x, y; cin >> x >> y;
		dp.insert ({x, y});
	}
	int count = 0;
	for (auto i:dp){ // just check the corners of each cell 
		if (!dp.count ({i.first+1, i.second}))
			count++;
		if (!dp.count ({i.first, i.second+1}))
			count++;
		if (!dp.count ({i.first-1, i.second}))
			count++;
		if (!dp.count ({i.first, i.second-1}))
			count++;
	}
	cout << count << '\n';
}
int32_t main () {
#ifndef VarunDebug
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#endif
	int t = 1;
	cin >> t;
	while (t--){
		Onigiri();
	}
}