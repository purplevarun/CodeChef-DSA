#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int L, R; cin >> L >> R;
	for (int i=L;i<=R;++i){
		if (i%2==0) continue;
		cout << i << ' ';
	}
	cout << endl;
}
