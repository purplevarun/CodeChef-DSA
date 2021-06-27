#include <bits/stdc++.h>
#define int int64_t 
using namespace std;
string S, Left, Right;
int N;
void Onigiri(){
	cin >> S;
	N = S.length();
	if (N%2==0){
		Left = S.substr(0, N/2);
		Right = S.substr(N/2, N);
	}
	else {
		Left = S.substr(0, N/2);
		Right = S.substr(N/2+1, N);
	}
	//cout << Left << ", " << Right << endl;
	sort (Left.begin(), Left.end());
	sort (Right.begin(), Right.end());
	if (Left.compare(Right)==0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
int32_t main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T; cin >> T;
	while (T--) Onigiri();
}
