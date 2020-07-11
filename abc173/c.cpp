#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

int count(vector<string> A) {
    int cnt = 0;
    rep(i, A.size()) {
        rep(j, A[i].size()) {
            if(A[i][j]=='r') ++cnt;
        }
    }
    return cnt;
}


int main() {
    int H, W, K;
    cin >> H >> W >> K;
    string row;
    vector<string> A;
    rep(i, H) {
        cin >> row;
        A.push_back(row);
    }
    int ans = 0;
    rep(h, 1<<H) {
        rep(w, 1<<W) {
            int cnt = 0;
            rep(i, H) {
                rep(j, W) {
                    if(h>>i&1 || w>>j&1) continue;
                    if(A[i][j] == '#') ++cnt;
                }
            }
        if(cnt==K) ++ans;
        }
    }

    cout << ans << endl;
    return 0;
}