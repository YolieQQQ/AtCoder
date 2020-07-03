#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;


int main() {
    int N, K;
    vector<int> P;
    cin >> N >> K;
    rep(i, N) {
        int p;
        cin >> p;
        P.push_back(p);
    }
    sort(P.begin(), P.end());
    int price = 0;
    rep(i, K) {
        price += P[i];
    }

    cout << price << endl;



    return 0;
}