#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int N;
int *A;
int Max = -1e9;
void Onigiri(){
	cin >> N;
	A = new int[N];
	for (int i=0;i<N;++i){
		cin >> A[i];
	}
	sort (A, A+N);
	for (int i=0;i<N;++i){
		Max = max (Max, A[i]*(N-i));
	}
	cout << Max << endl;
}
int32_t main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	Onigiri();
}
