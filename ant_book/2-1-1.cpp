#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
using ll = long long;
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

vector<int> num;
int cnt = 0;
bool visited[20000][20000];
bool memo[2000000000000];
int N = 0;

void dfs(int i, int j) {
    if (visited[i][j]) return;
    if(i==N+1) {
        return;
    }
    if(j==N+1) {
        return;
    }
    visited[i][j] = true;
    int n = 0;
    for(int k=0; k<j-i; k++) {
        n += num[i+k]*pow(10, k);
    }
    if(memo[n]) {
        cnt++;
    }
    else if(n%2019==0 && n!=0) {
        memo[n] = true;
        cnt++;
    }
    print(n);
    dfs(i, j+1);
    dfs(i+1, j);
    return;
}

int main() {
    string S;
    cin >> S;
    for(auto s: S) {
        num.push_back(s-'0');
    }
    reverse(num.begin(), num.end());
    N = num.size();
    dfs(0, 0);
    cout << cnt << endl;

    return 0;
}