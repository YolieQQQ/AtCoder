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

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    vector<pair<double, double>> A(N);
    rep(i, N) {
        int x, y;
        cin >> x, y;
        A[i].first = x;
        A[i].second = y;
    }

    rep(n, N) {
        P[n] = n;
    }
    double sum = 0;
    double prevX = 0;
    double prevY = 0;
    int i = 0;
    do {
        print(i);
        for(auto p: P) {
            sum += sqrt(pow((A[p].first-prevX), 2.0) + pow(A[p].second-prevY, 2.0));
            prevX = A[p].first;
            prevY = A[p].second;
        }
        
    } while(next_permutation(P.begin(), P.end()));
    print("---");
    printf("%.10lf", sum);

    return 0;
}