#include <bits/stdc++.h>
#define int long long
using namespace std;
void Onigiri (){
    int N, K; cin >> N >> K;
    int A[N];
    map <int, int> last;
    for (int i=0;i<N;++i) {
        cin >> A[i];
        last [A[i]] = -1;
    }
    if (last.size () < K){ cout << N << '\n'; return; }
    set <pair<int, int>> S;
    for (auto p:last)
        S.insert ({p.second, p.first});
    
    int Ans = 0;
    for (int i=0;i<N;++i){
        S.erase ({last[A[i]], A[i]});
        last[A[i]] = i;
        S.insert ({last[A[i]], A[i]});
        Ans = max (Ans, i - (*S.begin()).first);
    }
    cout << Ans << '\n';
}
signed main () {
    #ifndef VarunDebug
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #endif
    int t = 1;
    cin >> t;
    while (t--){
        Onigiri();
        #ifdef VarunDebug
        if (t!=0)
        cout << "------------------" << '\n';
        #endif
    }
}