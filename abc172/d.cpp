#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (ll i = ll(a); i < ll(b); ++i)
using ll = long long;
const ll INF = 100100100;

int main() {
    ll N, Q;
    cin >> N;
    vector<ll> A(N);
    rep(i, N) cin >> A[i];
    cin >> Q;
    vector<ll> B(Q), C(Q);
    rep(i, Q) {
        cin >> B[i];
        cin >> C[i];
    }
    ll sum = 0 ;   
    vector<ll> cntA(10000000, 0);
    for(auto a: A) {
        sum += a;
        cntA[a]++;
    }

    rep(i, Q) {
        ll inc = (C[i]-B[i])*cntA[B[i]];
        cntA[C[i]] += cntA[B[i]];
        cntA[B[i]] = 0;
        sum += inc;
        cout << sum << endl;
    }

    return 0;
}
