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



int main() {
    int N, M;
    cin >> N >> M;
    vector<int> S(N, -1);
    rep(i, M) {
        int s, c;
        cin >> s >> c;
        --s;
        if(i!=0 && S[s]!=-1) S[s] = min(S[s], c);
        else S[s] = c;
    }
    vector<int> num(N, 0);
    rep(i, M) {
        if(S[i]==-1) num[i] = 0;
        else num[i] = S[i];
    }
    int ans = 0;
    reverse(num.begin(), num.end());
    if(num[0]==0) {
        print(-1);
        return 0;
    }
    rep(k, N) {
        ans += num[k] * pow(10, k);
    }
    print(ans);
    return 0;
}