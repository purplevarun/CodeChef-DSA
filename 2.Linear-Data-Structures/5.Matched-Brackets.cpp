#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
    int N;
    cin >> N;
    int X;
    int cnt = 0, maxCnt = -1e9, cntLoc = 0;
    int depth = 0, maxDepth = -1e9, depthLoc = 0;
    int BracketStartIdx = 0;
    for (int i=1; i<=N; ++i) {
        cin >> X;
        cnt ++;
        if (X == 1)
            depth ++;
        else
            depth --;
        if (depth == 0) {
            cnt = 0;
            BracketStartIdx = i;
        }
        if (depth > maxDepth) {
            depthLoc = i;
            maxDepth = depth;
        }
        if (cnt > maxCnt) {
			cntLoc = BracketStartIdx;
			maxCnt = cnt;
        }
    }
	cout << maxDepth << ' ' << depthLoc << ' ' << maxCnt + 1 << ' ' << cntLoc + 1 << '\n';
}
int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    onigiri();
}
