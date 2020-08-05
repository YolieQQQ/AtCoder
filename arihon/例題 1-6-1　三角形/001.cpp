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
    int N;
    cin >> N;
    vector<pair<double, double>> pos(N);
    rep(i, N) {
        int x, y;
        cin >> x >> y;
        pos[i].first = x;
        pos[i].second = y;
    }
    double maxv = 0;
    rep(i, N) {
        rep(j, N) {
            if(i==j) continue;
            double l = sqrt(pow((pos[i].first-pos[j].first), 2)+pow((pos[i].second-pos[j].second), 2));
            maxv = max(l, maxv);
        }
    }
    print(maxv);
    return 0;
}