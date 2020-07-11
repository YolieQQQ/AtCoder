#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

int main() {
    string S;
    cin >> S;
    vector<int> Sar;
    rep(i, S.size()) {
        Sar.push_back(S[i]-'0');
    }


    int ans = 0;
    rep(bit, 1<<S.size()) {
        int a = 0;
        vector<int> pos;
        rep(i, S.size()) {
            pos.push_back(i);
            }
        rep(i, pos.size()) {
            a += pow(10, i)*Sar[pos[i]];
        }
        ans += a;
    }

    cout << ans << endl;

    return 0;
}