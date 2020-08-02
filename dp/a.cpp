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
vector<int> dp(100010, INF);// key is asiba val is cost

int main() {
    int N;
    cin >> N;
    vector<int> H(N);
    rep(i, N) cin >> H[i];
    dp[0] = 0;
    dp[1] = abs(H[1]-H[0]);
    xrep(i, 2, N) {
        dp[i] = min(dp[i-1]+abs(H[i-1]-H[i]), dp[i-2]+abs(H[i-2]-H[i]));
    }
    print(dp[N-1]);


    return 0;
}