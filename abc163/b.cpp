#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    int N, M, a;
    int A = 0;
    cin >> N >> M;
    rep(i, M) {
        cin >> a;
        A += a;
    }
    int delta = N - A;
    if(delta < 0) {
        cout << -1 << endl;
    } else {
        cout << delta << endl;
    }



    return 0;
}