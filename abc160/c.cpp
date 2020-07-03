#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

int maxVec(vector<int> V) {
    int maxV = 0;
    for(auto v: V) {
        if(maxV<v) {
            maxV = v;
        }
    }
    return maxV;
}


int main() {
    int K, N;
    cin >> K >> N;
    vector<int> A;
    int sum = 0;
    rep(i, N) {
        int a;
        cin >> a;
        sum += a;
        A.push_back(sum);
    }
    vector<int> dists;
    rep(i, N-1) {
        int dist = A[i+1]-A[i];
        dists.push_back(dist);
    }
    
    for(auto d: dists) {
        cout << d << endl;
    }


    cout << K-maxVec(dists) << endl;

    return 0;
}