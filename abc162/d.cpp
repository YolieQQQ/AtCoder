#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)



int main() {
    int N;
    string S;
    cin >> N;
    cin >> S;
    int cnt = 0;
    int R = 0;
    int G = 0;
    int B = 0;

    for(auto s: S) {
        if (s=='R') ++R;
        if (s=='G') ++G;
        if (s=='B') ++B;
    }
    int rgbcnt = 0;
    rep(n, N-3) {
        string str = S[n]+S[n+1]+S[n+2];
        string rgb = str;
        if (rgb=="RGB") {
            cout << rgb << endl;
            ++rgbcnt;
        }
    }

    int ans = (R*(R-1))/2 * (G*(G-1))/2 * (B*(B-1))/2 - rgbcnt;

    cout << ans << endl;

    return 0;
}