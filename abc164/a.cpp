#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    int S, W;
    cin >> S >> W;

    if(W>=S) cout << "unsafe" << endl;
    else cout <<  "safe" << endl;

    return 0;
}