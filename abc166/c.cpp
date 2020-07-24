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
const int INF = 100100100;



int main() {
    int N, M;
    cin >> N >> M;
    vector<int> H(N+1);
    xrep(i, 1, N) cin >> H[i];
    vector<vector<int>> AB(N+1);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        AB[a].push_back(b);
        AB[b].push_back(a);
    }

    rep(i, N+1) {
        print(i);
        print(AB[i]);
    }




    return 0;
}