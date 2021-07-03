#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int N;
string S;
int precedence (char ch){
	if (ch == '^')
		return 5;
	else if (ch == '/')
		return 4;
	else if (ch == '*')
		return 3;
	else if (ch == '+' || ch == '-')
		return 2;
	return 1;
}
void onigiri() {
	cin >> N >> S;
	stack <char> st;
	string Ans = "";

	for (char ch : S){
		
	}
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
