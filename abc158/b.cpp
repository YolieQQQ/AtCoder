#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    long long  N, A, B;
    cin >> N >> A >> B;
    long long blue = 0;
    blue = A*(N/(A+B))+N%(A+B);
    cout << blue << endl;
    
    return 0;
}