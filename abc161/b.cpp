#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
int main() {
    int N, M;
    cin >> N >> M;
    int a;
    vector<int> A;
    rep(i, N) {
        cin >> a;
        A.push_back(a);
    }
    int counter = 0;
    sort(A.begin(), A.end());
    int sumTop = 0;
    for(int i=A.size()-1; i>M; i--) {
        sumTop+=A[i];
    }
    int sumAll = 0;
    rep(i, N) {
        sumAll += A[i];
    }
    int P = 1e5*sumTop/sumAll;
    int PP = 1e5/(4*M);
    bool con = P >= PP;
    if(con) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}