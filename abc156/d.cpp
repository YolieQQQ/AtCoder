#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(ll i=ll(a);i<ll(b);++i)
using ll = long long;

ll ans = 0;
ll N, a, b;

int main() {
    vector<vector<ll>> As;
    cin >> N >> a >> b;
    for(ll bit=1; bit<(1<<N); ++bit) {
        vector<ll> A(N, 0);
        for(ll i=0; i<N; ++i) {
            if(1&(bit>>i)) {
                A[i] = 1;
            }
        }
        As.push_back(A);
    }
    ll ans = 0;
    for(auto as: As) {
        ll cnt=0;
        for(auto a: as) {
            if(a==1) ++cnt; 
        }
        if(cnt != a && cnt != b) {
            ++ans;
        }
    }
    ll inf = 10e9;
    cout << ans%(inf+7) << endl;
}