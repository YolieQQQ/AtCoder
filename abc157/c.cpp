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
#define zrep(i, a, b, c) for (int i = int(a); i < int(b); i+=int(c))
using ll = long long;
const int INF = 1001001001;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> S(M);
    vector<int> C(M);
    rep(i, M) {
        int s;
        cin >> s;
        s--;
        S[i] = s;
        cin >> C[i];
    }
    vector<int> ans(N, 0);
    rep(i, M) {
        int s = S[i];
        int c = C[i];
        ans[s] = c;
    }
    if(ans[0]==0) {
        print(-1);
        return 0;
    }

    rep(i, N) {
        cout << ans[i];
    }
    cout << endl;

    return 0;
}