#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int N; cin >> N;
	int tillNow = -1e9;
	int cnt = 1;
	int X; cin >> X;
	tillNow = X;
	for (int i=0;i<N-1;++i){
		cin >> X;
		if (tillNow < X){
			
		}
		else{
			cnt ++;
			tillNow = X;
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
