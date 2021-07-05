#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void dbg (auto V){
	#ifndef VarunDebug
	return;
	#endif

	cout << "[\n";
	for (auto i:V){
		printf ("\t{ %lld, %lld }\n", i.first, i.second);
	}
	cout << "\n]\n";
}
void Onigiri () {
	int N; cin >> N;
	vector <pair <int, int>> pts;
	pts.push_back ({100000, 0});
	for (int i=0;i<N;++i){
		int x, y; cin >> x >> y;
		pts.push_back({x, y});
	}
	sort (pts.begin(), pts.end());
	dbg (pts);
	int maxArea = -1e9;
	int prevX = 0;
	for (int i=0;i<N;++i){
		maxArea = max (maxArea, pts[i].first - prevX);
		prevX = pts[i].first;
	}
	maxArea = maxArea * 500; // raise vertical bars of max ht. (500)
	stack <int> st;
	for (int i=0;i<=N;++i){
		while (!st.empty() && pts[i].second < pts[st.top()].second){
			int val = st.top();
			st.pop();
			if (!st.empty()){
				maxArea = max (maxArea, pts[val].second*(pts[i].first - pts[st.top()].first));
			}
			else {
				maxArea = max (maxArea, pts[val].second*pts[i].first);
			}
		}	
		st.push (i);
	}
	cout << maxArea << '\n';
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