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
    vector<int> T;
    for(int i=S.size()-1; i>=0; i--) {
        T.push_back(S[i]-'0');
    }
    int N = T.size();
    int sum = 0;
    rep(bit, 1<<N) {
        vector<int> PlusPos;
        rep(i, N) {
            int k = 0;
            if(bit>>i&1) {
                PlusPos.push_back(i);
            }
        }
        int max_pos = *max_element(PlusPos.begin(), PlusPos.end());
        if(max_pos!=N-1) {
            PlusPos.push_back(N-1);
        }
        int prev = 0;
        rep(p, PlusPos.size()) {
            int k = 0;
            xrep(n, prev, p) {
                sum += T[n]*pow(10, k);
                k++;
            }
            prev = p;
        }
    }
    print(sum);


    return 0;
}