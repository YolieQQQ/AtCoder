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
    int N, K, Q;
    cin >> N >> K >> Q;
    vector<int> A(Q);
    rep(i, Q) cin >> A[i];

    int maxv = *max_element(A.begin(), A.end());
    vector<int> countAr(maxv+1, 0);

    rep(i, N) {
        countAr[A[i]] += 1;
    }

    print(countAr);




    return 0;
}