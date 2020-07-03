#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
using ll = long long;

int main() {
    int K, A, B;
    cin >> K >> A >> B;
    for(int i=A; i<=B; i++) {
        if(i%K==0) {
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;

    return 0;
}