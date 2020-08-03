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
    string S;
    cin >> S;
    int N = S.size();
    vector<int> Children(N, 1);
    vector<int> mods;
    xrep(i, 1, N+1) {
        mods.push_back((int)10e100%i);
    }
    vector<int> div;
    xrep(i, i, N+1) {
        div.push_back((int)(10e100)/i);
    }
    print(mods);
    print(div);

    return 0;
}