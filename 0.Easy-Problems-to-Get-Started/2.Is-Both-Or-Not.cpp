#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
int32_t main () {
	int N; cin >> N;
	if (N%5==0 && N%11==0){
		cout << "BOTH" << endl;
	}
	else if (N%5==0 || N%11==0){
		cout << "ONE" << endl;
	}
	else {
		cout << "NONE" << endl;
	}
}
