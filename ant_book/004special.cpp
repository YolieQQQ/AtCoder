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

int N, M;// n tyoten m hen
vector<int> visited(N, INF);
vector<vector<int>> a2b(M);
int ans = 0;

void dfs(int node);

int main() {
    cin >> N >> M;
    vector<vector<int>> a2b(M);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        a2b[a].push_back(b);
    }
    return 0;
}

void dfs(int node) {
    int i;
    if(visited[node]==0) return;
    for(i=0; i<N; i++){
        if(visited[i]==INF) break;
    }
    if(i==N-1) {
        ++ans;
    }
    visited[node] = 0;
    i
}