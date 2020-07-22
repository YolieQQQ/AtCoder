
#include <bits/stdc++.h>
using namespace std;
void print() {
    cout << endl;
}
template <class Head, class... Tail>
void print(Head &&head, Tail &&... tail) {
    cout << head;
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
    int N, Q;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    cin >> Q;
    vector<int> B(Q), C(Q);
    rep(i, Q) {
        cin >> B[i];
        cin >> C[i];
    }
    int sum = 0 ;   
    vector<int> cntA(100000, 0);
    for(auto a: A) {
        sum += a;
        cntA[a]++;
    }

    rep(i, Q) {
        int inc = (C[i]-B[i])*cntA[B[i]];
        cntA[C[i]] += cntA[B[i]];
        sum += inc;
        print(sum);
    }

    return 0;
}