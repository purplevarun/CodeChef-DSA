#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int K, A, B;
	cin >> K >> A >> B;
	int Sum = A + B;
	int Cycle = (2*Sum)%10 + (4*Sum)%10 + (8*Sum)%10 + (6*Sum)%10;
	int numCycles = (K - 3) / 4;
	
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
