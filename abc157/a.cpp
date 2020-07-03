#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)

int main() {
    int N;
    cin >> N;
    if(N%2==0) {
        cout << N/2 << endl;
    }
    else {
        cout << (N/2)+1 << endl;
    }
}