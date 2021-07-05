#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void Onigiri () {
	int N, X, Y;
	cin >> N >> X >> Y;
	int start[N], end[N], V[X], W[Y];
	for (int i = 0; i < N; ++i){
		cin >> start[i] >> end[i];
	}
	for (int i = 0; i < X; ++i){
		cin >> V[i];
	}
	for (int i = 0; i < Y; ++i){
		cin >> W[i];
	}
	sort (V, V+X); sort (W, W+Y);
	int Ans = 1e9;
	for (int i=0;i<N;++i){
		int x = upper_bound (V, V + X, start[i]) - V - 1;
		int y = lower_bound (W, W + Y, end[i]) - W;
		if (x >= 0 && y < Y)
			Ans = min (Ans, W[y] - V[x] + 1);
	}
	cout << Ans << '\n';

}
int32_t main (){
	#ifndef VarunDebug
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	#endif

	int t = 1;
	// cin >> t;

	for (int i=0;i<t;++i)
		Onigiri();
}