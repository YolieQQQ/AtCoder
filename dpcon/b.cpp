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
const int BIG = 10010;

int dp[BIG];
int h[BIG];
int N, K;

bool done[BIG];
int memo[BIG];

int rec(int i) {
    int ret;
    if(i==0) return 0;
    if(done[i]) return memo[i];
    done[i] = true;
    xrep(k, 1, K+1) {
        ret = abs(h[i+k]-h[i]);
    }


    return ret;


}



int main() {
    cin >> N >> K;
    rep(i, N) cin >> h[i];

    return 0;
}