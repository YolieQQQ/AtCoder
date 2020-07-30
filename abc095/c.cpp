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
    int A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    int maxXY = 10000;

    int loopmax = maxXY+1;
    print(loopmax);
    int mincost = INF;
    rep(a, loopmax) {
        rep(b, loopmax) {
            rep(c, loopmax) {
                if(a+(c/2)>=X && b+(c/2)>=Y) {
                    mincost = min(mincost, A*a+B*b+C*c);
                } 
            }
        }
    }

    print(mincost);

    return 0;
}