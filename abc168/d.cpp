#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
using ll = long long;

const int INF = 1001001001;
int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> Graph(700000);
    rep(i, M) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }
    queue<int> nextWillVisit;
    vector<int> dist(N, INF);
    dist[0] = 0;
    vector<int> prev(N, INF);
    prev[0] = -1;
    nextWillVisit.push(0);

    while(!nextWillVisit.empty()) {
        int v = nextWillVisit.front();
        nextWillVisit.pop();
        for(int nv: Graph[v]) {
            if(dist[nv] != INF) continue;
            dist[nv] = dist[v]+1;
            prev[nv] = v;
            nextWillVisit.push(nv);
        }
    }
    
    cout << "Yes" << endl;

    for(int i=1; i<N; i++) {
        cout << prev[i]+1 << endl;
    }
    return 0;
}