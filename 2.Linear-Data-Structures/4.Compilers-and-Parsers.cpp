#include <bits/stdc++.h>
#define int int64_t
using namespace std;
void onigiri() {
    string S;
    cin >> S;
    int count = 0;
    int ans = 0;
    for (int i=0; i<S.length(); ++i) {
        char ch = S[i];
        if (ch == '<')
            count ++;
        else if (ch == '>')
            count --;
        if (count < 0)
            break;
        if (count == 0)
            ans = i + 1;
    }
    cout << ans << '\n';
}
int32_t main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        onigiri ();
    }
}
