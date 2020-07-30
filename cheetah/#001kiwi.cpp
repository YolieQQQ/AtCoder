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

const int CAP_SIZE = 6;
const int MOVE_SIZE = 8;

vector<int> cap = {14, 35, 86, 58, 25, 62};
vector<int> bot = {6, 34, 27, 38, 9, 60};
vector<int> fromId = {1, 2, 4, 5, 3, 3, 1, 0};
vector<int> toId = {0, 1, 2, 4, 2, 5 ,3, 1};

vector<int> solve() {
    rep(i, MOVE_SIZE) {
        int f = fromId[i];
        int t = toId[i];

        int space = cap[t] - bot[t];
        if(space>=cap[t]-bot[t]) {
            int vol = bot[f];
            bot[t] += vol;
            bot[f] = 0;
        } else {
            int vol = space;
            bot[t] += vol;
            bot[f] -= vol;
        }
    }

    return bot;
}




int main() {
    auto ans = solve();
    print(ans);

    return 0;
}