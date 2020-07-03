#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    int N;
    cin >> N;
    string s;
    set<string> S;
    rep(i, N) {
        cin >> s;
        S.insert(s);
    }
    cout << S.size() << endl;
    return 0;
}