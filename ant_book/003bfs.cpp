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
const int INF = 100100100;
int main() {
    int H, W, sx, sy, gx, gy;
    cin >> H >> W;
    cin >> sx >> sy;
    cin >> gx >> gy;
    --sx; --sy; --gx; --gy;
    vector<string> C(H);
    rep(i, H) {
        cin >> C[i];
    }

    queue<array<int, 2>> Q;
    vector<int> row(W, INF);
    vector<vector<int>> dist(H, row);
    Q.push({sx, sy});
    dist[sy][sx] = 0;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    while(!Q.empty()) {
        auto xy = Q.front();
        Q.pop();
        rep(i, 4) {
            int nx = xy[0] + dx[i];
            int ny = xy[1] + dy[i];
    
            if (0<=nx && nx < W && 0<=ny && ny<H && C[ny][nx]=='.' && dist[ny][nx]==INF) {
                Q.push({nx, ny});
                dist[ny][nx] = dist[xy[1]][xy[0]]+1;
            }
        }
    }
    print(dist[gx][gy]);

    return 0;
}