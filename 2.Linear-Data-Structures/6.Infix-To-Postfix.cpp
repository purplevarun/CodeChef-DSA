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
		//If Operand, then directly output the character
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
			Ans.push_back (ch);
		}
		else {
			// If Opening Bracket, Push to stack
			if (ch == '(')
				st.push(ch);
			// If Closing Bracket, Output Stack elements till Opening Bracket is encountered
			else if (ch == ')'){
				while (st.top() != '('){
					Ans.push_back(st.top());
					st.pop();
				}
				st.pop();
			}
			// If Operator
			else {
				// If Precedence of Current Operator is Less than equal to Operator at the top of stack
				while (st.empty()==false && precedence(ch) <= precedence(st.top())){
					Ans.push_back(st.top());
					st.pop();
				}
				// push the operator into stack
				st.push(ch);
			}
		}
	}
	// empty the stack
	while (st.empty() == false){
		Ans.push_back(st.top());
		st.pop();
	}
	cout << Ans << '\n';
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
