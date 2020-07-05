#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    int sum  = 0;
    rep(i, N-1) {
        int a;
        cin >> a;
        sum += a;
    }
    int ans;
    rep(k, K+1) {
        ans = (k+sum)/N;
        if(ans >= M) {
            cout << k << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}