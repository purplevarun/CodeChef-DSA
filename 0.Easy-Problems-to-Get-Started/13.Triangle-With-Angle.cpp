#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int A, B, C; cin >> A >> B >> C;
	if ((A + B + C) == 180 && A > 0 && B > 0 && C > 0)
		cout << "YES" << endl;
	else 
		cout << "NO" << endl;
}
