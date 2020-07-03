#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)

int main() {
    int N;
    int a;
    cin >> N;
    vector<int> A;
    rep(i, N-1) {
        cin >> a;
        A.push_back(a);
    }
    vector<int> ans(N);
    for(int ai: A) {
        ans[ai-1] += 1;
    }

    for(int an: ans) {
        cout << an << endl;
    }
    return 0;
}