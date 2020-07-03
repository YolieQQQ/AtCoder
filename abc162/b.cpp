#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    unsigned long long N;
    cin >> N;
    unsigned long long ans = 0;
    xrep(i,1, N+1) {
        if(!(i%3==0||i%5==0)) ans+=i;
    }
    cout << ans << endl;

    return 0;
}