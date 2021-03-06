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
    cin >> N;
    string C;
    cin >> C;
    int cnt = 0;
    int mid;
    if(N%2==0) {
        mid = N/2-1;
    }
    else {
        mid = N/2;
    }
    vector<int> WIndex;
    vector<int> RIndex;
    rep(i, mid+1) {
        if(C[i]=='W') {
            WIndex.push_back(i);
        }
    }
    xrep(i, mid+1, N) {
        if(C[i]=='R') {
            RIndex.push_back(i);
        }
    }
    reverse(RIndex.begin(), RIndex.end());
    
    int ans = max(WIndex.size(), RIndex.size());
    print(ans);
    return 0;
}