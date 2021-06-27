#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int N; cin >> N;
	for (int i=1;i<=N;++i){
		int spaces = N-i;
		int stars = i;
		for (int j=0;j<spaces;++j)
			cout << ' ';
		for (int j=0;j<stars;++j)
			cout << '*';
		cout << endl;
	}
}
