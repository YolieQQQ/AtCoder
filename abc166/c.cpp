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
    int n, m;
    cin >> n >> m;
    vector<int> h(n+1);
    rep(i, n) cin >> h[i+1];

    vector<vector<int>> A2B(n+1);
    vector<vector<int>> B2A(n+1);
    

    rep(i, m) {
        int a, b;
        cin >> a >> b;
        A2B[a].push_back(b);
        B2A[b].push_back(a);
    }
    int cnt = 0;
    xrep(t, 1, n+1) {
        int myTall = h[t];
        vector<int> neighbors = A2B[t];
        int tallcnt = 0;
        for(auto neighbor: neighbors) {
            int neighborTall = h[neighbor];
            if(neighborTall <= myTall) {
                tallcnt++;
            }
        }
        if (tallcnt==neighbors.size() && tallcnt!=0) {
            ++cnt;
        }
    }


    xrep(t, 1, n+1) {
        int myTall = h[t];
        vector<int> neighbors = B2A[t];
        int tallcnt = 0;
        for(auto neighbor: neighbors) {
            int neighborTall = h[neighbor];
            if(neighborTall <= myTall) {
                tallcnt++;
            }
        }
        if (tallcnt==neighbors.size() && tallcnt!=0) {
            ++cnt;
        }

    }
    print(cnt);


    return 0;
}