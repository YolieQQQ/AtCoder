#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

double maxVec(vector<double> &V) {
    double maxV = 0;
    for(auto v: V) {
        maxV = max(v, maxV);
    }
    return maxV;
}




int main() {
    int N, K;
    cin >> N >> K;
    vector<double> P(N);
    rep(i, N) {
        cin >> P[i];
    }

    vector<double> accSum;
    double sum = 0;
    for(double p: P) {
        sum += p;
        accSum.push_back(sum);
    }
    vector<double> exs;
    rep(i, N-K) {
        exs.push_back((1+accSum[i+K]-accSum[i-1])/2);
    }


    cout << maxVec(exs) << endl;
    
}
