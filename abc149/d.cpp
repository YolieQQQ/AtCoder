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
    int N, K, R, S, P;
    cin >> N >> K >> R >> S >> P;
    string T;
    cin >> T;
    vector<char> Schar;
    for(auto s: T) {
        Schar.push_back(s);
    }
    vector<int> prevHands;
    sort(Schar.begin(), Schar.end());
    int ans = -1;
    int i = 0;
    do {
        ++i;
        if(i%K==0) {
            int prev = prevHands[prevHands.size()-K];
            if(Schar[i]==prev) continue;
        }
        int sum = 0;
        for(char s: Schar) {
            if(s=='r') {
                sum += R;
            }
            if(s=='s') {
                sum += S;
            }
            if(s=='p') {
                sum += P;
            }
        }
        int ans = max(sum, ans);
    }
    while (next_permutation(Schar.begin(), Schar.end()));
    
    print(ans);

    return 0;
}