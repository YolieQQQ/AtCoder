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


int count(vector<int> &A) {
    int cnt = 0;
    for(auto a: A) {
        cnt += (a*(a-1))/2;
    }

    return cnt;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) {
        cin >> A[i];
    }
    int maxv = 0;
    for(auto a: A) {
        maxv = max(a, maxv);
    }

    vector<int> countA(maxv+1, 0);

    rep(i, N) {
        ++countA[A[i]];
    }

    for(auto a: A) {
        auto calA = countA; 
        --calA[a];
        print(count(calA));
    }
    return 0;
}