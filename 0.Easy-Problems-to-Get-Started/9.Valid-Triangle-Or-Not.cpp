#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int A, B, C;
	cin >> A >> B >> C;
	bool check = true;
	if (A > (B + C))
		check &= false;
	if (B > (A + C))
		check &= false;
	if (C > (B + A))
		check &= false;

	puts (check?"YES":"NO");
}
