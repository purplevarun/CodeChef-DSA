#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int N;
int *A;
void onigiri() {
    cin >> N;
    A = new int [N];
    for (int i=0; i<N; ++i)
        cin >> A[i];
    int Min = 1e9;
    int Sum = 0;
    for (int i=0; i<N; ++i) {
        Min = min (Min, A[i]);
        Sum += Min;
    }
    cout << Sum << '\n';
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