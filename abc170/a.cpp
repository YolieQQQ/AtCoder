#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    int x1, x2, x3, x4, x5;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    if (x1==0) cout << 1 << endl;
    else if (x2==0) cout << 2 << endl;
    else if (x3==0) cout << 3 << endl;
    else if (x4==0) cout << 4 << endl;
    else if (x5==0) cout << 5 << endl;
    return 0;
}