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
vector<int> vec_s;
ll ans = 0;



int main() {
    string S;
    cin >> S;
    rep(i, S.size()) {
        vec_s.push_back(S[i]-'0');
    }
    int N = vec_s.size();
    reverse(vec_s.begin(), vec_s.end());
    rep(bit, 1<<N) {
        rep(i, N) {
            if(bit>>i&1) {
                cout << i;
            }
        }
        cout << endl;
    }


    return 0;
}