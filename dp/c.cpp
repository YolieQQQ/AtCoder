#include <bits/stdc++.h>
using namespace std;
void print() {
    cout << endl;
}
template <class Head, class... Tail>
void print(Head &&head, Tail &&... tail) {
    cout << head;
    if (sizeof...(tail) != 0)
        cout << " ";
    print(forward<Tail>(tail)...);
}
template <class T>
void print(vector<T> &vec) {
    for (auto &a : vec) {
        cout << a;
        if (&a != &vec.back())
            cout << " ";
    }
    cout << endl;
}
template <class T>
void print(vector<vector<T>> &df) {
    for (auto &vec : df) {
        print(vec);
    }
}
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
using ll = long long;
const int INF = 1001001001;

int N;
vector<vector<int>> abc;

int main() {
    cin >> N;
    rep(i, N) {
        int a, b, c;
        cin >> a >> b >> c;
        abc.push_back({a, b, c});
    }
    int maxv = max(abc[0][0], abc[0][1]);
    maxv = max(maxv, abc[0][2]);
    vector<int> dp(N, 0);
    dp[0] = maxv;
    int dont_use = -1;
    rep(n, N) {
        int prev_did = -1;
        rep(did, 3) {
            if(did==dont_use) continue;
            if(dp[n]<dp[n-1]+abc[n][did]) {
                dp[n] = dp[n-1]+abc[n][did];
                prev_did = did;
            }
        }
        dont_use = prev_did;
    }
    print(dp[N-1]);

    return 0;
}