#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (ll i = ll(a); i < ll(b); ++i)
using ll = long long;

const ll INF = 100100100;
int ans;
ll N, K;
vector<ll> A(N+1, INF);

ll k = 0;

vector<int> memo(50, -1);

ll dp(ll a) {
    ++k;
    if(k==K) {
        ans = a;
        return INF;
    }
    if(memo[A[a]]!=-1) {
        return memo[A[a]];
    }
    return memo[A[a]] = dp(memo[A[a]]);
}

int main() {
    cin >> N >> K;
    xrep(i, 1, N+1) {
        ll a;
        cin >> a;
        A[i] = a;
    }

    ll stop = dp(1);
    cout << ans << endl;
    return 0;
}