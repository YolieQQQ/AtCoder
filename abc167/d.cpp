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
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    rep(i, N) {
        int a;
        cin >> a;
        --a;
        A[i] = a;
    }

    set<int> notDouble;
    vector<int> loop;
    int now = 0;
    int nxt;
    loop.push_back(now);
    notDouble.insert(now);
    
    while(1) {
        nxt = A[now];
        print(nxt);
        loop.push_back(nxt);
        notDouble.insert(nxt);
        if(loop.size()!=notDouble.size()) {
            break;
        }
    }

    print(loop);


    return 0;
}