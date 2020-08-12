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
#define zrep(i, a, b, c) for (int i = int(a); i < int(b); i+=int(c))
using ll = long long;
const int INF = 1001001001;

vector<int> S;
bool visited[200000][200000];
int memo[200000][200000];


void dfs(int start, int end) {
    int num = 0;
    if(visited) {
        num = 
    }
}



int main() {
    string T;
    cin >> T;
    rep(i, T.size()) {
        S.push_back(T[i]-'0');
    }
    reverse(S.begin(), S.end());




    
    return 0;
}