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
    double D;
    cin >> N >> D;
    vector<int> X(N);
    vector<int> Y(N);
    rep(i, N) {
        cin >> X[i];
        cin >> Y[i];
    }

    int cnt = 0;
    rep(i, N) {
        double d = sqrt(pow(X[i], 2)+pow(Y[i], 2));
        if(d<=D) {
            cnt++;
        }
    }

    print(cnt);




    return 0;
}