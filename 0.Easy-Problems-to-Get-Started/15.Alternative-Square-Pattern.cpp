#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int N; cin >> N;
	int val = 1;
	for (int i=0;i<N;++i){
		if (i%2==0){
			for (int j=val;j<val+5;++j){
				cout << j << ' ';
			}
		}
		else {
			for (int j=val+4;j>=val;--j)
				cout << j << ' ';
		}
		val += 5;
		cout << endl;
	}
}
