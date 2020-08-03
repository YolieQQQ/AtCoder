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

vector<int> si(int N) {
    vector<int> sosu;
    for(int i=N-1; i>=2; i--) {
        if(N%i==0) {
            int comp = 0;
            int cnt = 0;
            for(int j=2; j<i; j++) {
                comp++;
                if(i%j==0) {
                    ++cnt;
                }
            }
            if(comp==cnt) {
                sosu.push_back(i);
            }
        }
    }
    return sosu;
}



int main() {
    ll N;
    cin >> N;
    auto pv = si(N);
    sort(pv.begin(), pv.end());
    print(log10(pv[1])+1);

    return 0;
}