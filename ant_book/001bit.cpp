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
vector<int> SInts;

int main() {
    string S;
    cin >> S;
    for(char s: S) {
        SInts.push_back(s-'0');
    }
    int ans = 0;
    int N = SInts.size();

    rep(bit, 1<<(N)) {
        vector<int> opsIndex;
        rep(i, N) {
            if(bit>>i&1) {
                opsIndex.push_back(i);
            }
        }
        int M = N-opsIndex.size();
        rep(i, M) {
            opsIndex.push_back(N);
        }
        int prev = 0;
        int num = 0;
        for(int op: opsIndex) {
            xrep(j, prev, op) {
                num += SInts[j]*pow(10, j-prev);
                prev = op;
            }
        }
        print(num);
        ans += num;
        
    }

    print(ans);

    return 0;
}

