#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
using ll = long long;
int main() {
    ll A, B, N;
    cin >> A >> B >> N;
    vector<ll> Nums;
    rep(x, N+1) {
        Nums.push_back((A*x/B)+(x/B)*(-A));
    }

    ll max = -1000000000000000;
    rep(i, Nums.size()) {
        if(max<Nums[i]) {
            max = Nums[i];
        }
    }

    cout << max << endl;

    return 0;
}