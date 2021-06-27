#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int N; cin >> N;
	int A[N];
	for (int i=0;i<N;++i)
		cin >> A[i];
	for (int i=N-1;i>=0;--i)
		cout << A[i] << ' ';
	cout << endl;
}
