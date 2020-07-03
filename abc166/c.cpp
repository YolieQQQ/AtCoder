#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;
const int INF = 100100100;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> H;
    vector<vector<int>> A(M);
    vector<vector<int>> B(M);
    H.push_back(INF);
    rep(i, N) {
        int  h;
        cin >> h;
        H.push_back(h);
    }

    rep(i, M) {
        int a, b;
        cin >> a >> b;
        A[a].push_back(b);
        B[b].push_back(a);
    }

    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int v = q.front();
        q.pop();

        for(int ag: A[v]) {
            for(int bg: A[v]) {
                
            }
        }
    }





    return 0;
}