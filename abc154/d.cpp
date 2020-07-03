#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> P(N, 0);
    rep(i, N-K) {
        int p;
        cin >> p;
        P[i] = p;
    }   
    vector<int> accSum;
    int sum = 0;
    rep(i, N) {
        sum += P[i]+1;
        accSum.push_back(sum);
    }
    int maxV = -1;
    int e = -1;
    rep(i, N*N) {
        e = accSum[i+K]-accSum[i];
        maxV = max(maxV, e);
    }
    printf("%.8f\n", (double)maxV/2.0);
    return 0;
}