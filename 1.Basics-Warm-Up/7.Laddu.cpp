#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
	int n;
	string org;
	cin >> n >> org;
	int laddus = 0;
	while (n--){
		string x;
		cin >> x;
		if (x == "CONTEST_WON"){
			int Rank; cin >> Rank;
			if (Rank <= 20)
				laddus += 300 + (20 - Rank);
			else 
				laddus += 300;
		}
		else if (x == "TOP_CONTRIBUTOR"){
			laddus += 300;
		}
		else if (x == "BUG_FOUND"){
			int severity; cin >> severity;
			laddus += severity;
		}
		else if (x == "CONTEST_HOSTED"){
			laddus += 50;
		}
	}
	if (org == "INDIAN"){
		cout << laddus/200 << endl;
	}
	else 
		cout << laddus/400 << endl;
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
