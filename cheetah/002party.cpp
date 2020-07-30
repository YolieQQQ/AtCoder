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

vector<string> first = {"snakes", "programing" "cobra", "monty"};
vector<string> second = {"python", "python", "anaconda", "python"};


int main() {
    int N = first.size();
    int cnt = 0;
    int ans = 0;
    rep(i, N) {
        int f = 0;
        int s = 0;
        rep(j, N) {
            if(first[i]==first[j]) f++;
            if(first[i]==second[j]) f++;
            if(second[i]==first[j]) s++;
            if(second[i]==second[j]) s++;
        }
        ans = max(f, ans);
        ans = max(s, ans);
    }

    print(ans);
    
    return 0;
}