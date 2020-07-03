#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    int X;
    cin >> X;
    int happy500, happy5;
    happy500 = X/500;
    happy5 = (X-happy500*500)/5;
    cout << 1000*happy500 + 5*happy5 << endl;

    return 0;
}