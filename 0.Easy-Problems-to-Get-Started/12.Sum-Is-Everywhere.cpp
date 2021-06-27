#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int evenSum = 0, oddSum = 0;
	int N; cin >> N;
	for (int i=1;i<=2*N;i+=2)
		oddSum += i;
	for (int i=2;i<=2*N;i+=2)
		evenSum += i;
	cout << oddSum << " " << evenSum << endl;
}
