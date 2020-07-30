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
    int N, K;
    int R, S, P;
    string T;
    cin >> N >> K >> R >> S >> P >> T;
    vector<char> winT;

    for(auto t: T) {
        if(t=='r') {
            winT.push_back('p');
        }
        else if(t=='s') {
            winT.push_back('r');
        }
        else {
            winT.push_back('s');
        }
    }
    print(winT);

    rep(i, N-K) {
        if(winT[i]==winT[i+K]) {
            if(winT[i]=='r') {
                winT[i] = 's';
            }
            else if(winT[i]=='s') {
                winT[i] = 'p';
            }
            else {
                winT[i] = 'r';
            }
        }
    }

    int ans = 0;
    print(winT);
    for(auto wt: winT) {
        if(wt=='r') {
            ans += R;
        }
        else if(wt=='s') {
            ans += S;
        }
        else {
            ans += P;
        }
    }
    print(ans);


    return 0;
}