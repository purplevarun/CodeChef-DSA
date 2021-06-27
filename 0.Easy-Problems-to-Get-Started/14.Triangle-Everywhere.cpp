#include <bits/stdc++.h>
#define int int64_t 
using namespace std; 
int32_t main () {
	int x, y, z; cin >> x >> y >> z;
	if (x + y > z && y + z > x && x + z > y){
		if (x == y && y == z)
			cout << 1 << endl;
		else if (x == y || y == z || z == x)
			cout << 2 << endl;
		else 
			cout << 3 << endl;
	}
	else {
		cout << -1 << endl;
	}
}
