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

int N, M, Q;
vector<vector<int>> abcd;
int max_point = -1;
vector<int> A;
vector<int> B;
vector<int> C;
vector<int> D;
int maxv = -1;
void dfs(int i, int score, vector<int> Ar) {
    print(Ar);
    if(i==N) {
        maxv = max(maxv, score);
    }
    rep(i, N) {
        if(Ar[B[i]]-Ar[A[i]] == C[i]) score += D[i];
    }
    if (Ar[i]-1>=0) {
        Ar[i]--;
    }
    
    dfs(i+1, score, Ar);
}


int main() {
    cin >> N >> Q;
    rep(i, Q) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        A.push_back(a);
        B.push_back(b);
        C.push_back(c);
        D.push_back(d);
    } 
    vector<int> Ar(N, M);
    dfs(0, 0, Ar);

    




    return 0;
}