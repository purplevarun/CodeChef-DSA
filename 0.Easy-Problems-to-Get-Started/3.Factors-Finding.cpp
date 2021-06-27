#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int N; cin >> N;
	vector <int> factors;
	for (int i=1;i<=N;++i){
		if (N%i==0)
			factors.push_back(i);
	}
	cout << factors.size() << endl;\
	for (int i:factors)
		cout << i << ' ';
	cout << endl;
}
