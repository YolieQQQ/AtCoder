#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (ll i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (ll i = ll(a); i < ll(b); ++i)
using ll = long long;

int main() {
    ll N;
    vector<ll> AB;
    vector<vector<ll>> ABs;
    cin >> N;
    rep(i, N) {
        ll a, b;
        cin >> a >> b;
        AB.push_back(a);
        AB.push_back(b);
        ABs.push_back(AB);
        AB = {};
    }
    set<double> MIDs;

    for (auto start : ABs) {
        for (auto end : ABs) {
            rep(i, 2) {
                rep(j, 2) {
                    if(i==j) continue;
                    int d = end[j] - start[i];
                    int mid = (d)/2;
                    if(d==0) continue;
                    if (d % 2 == 0) {
                        MIDs.insert(((double)mid));
                    } else {
                        MIDs.insert(((double)mid+1)/2.0);
                    }
                }
            }
        }
    }

    cout << MIDs.size() << endl;

    return 0;
}