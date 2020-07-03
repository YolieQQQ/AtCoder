#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (long long i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (long long i = long long(a); i < long long(b); ++i)

vector<int> A;
int ans = 0;

void search(int p, int k) {
    cout << p << "|||" << k << endl;;
    if(p==k) {
        search(p, k+1);
    }
    if(k==A.size()-1) {
        k = p+2;
        search(p+1, k);
        return;
    }
    if(p==A.size()-1) return;
    search(p, k+1);
    search(p+1, k);
    return;
}


int main() {
    int N;
    cin >> N;
    rep(i, N) {
        int a;
        cin >> a;
        A.push_back(a);
    }

    search(0, 1);
    cout << ans << endl;


    return 0;
}