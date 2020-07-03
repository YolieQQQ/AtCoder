#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

const int INF = 100100100;

int maxVec(vector<int> V) {
    int max = 0;
    for(int v: V) {
        
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> A;
    rep(i, N+1) {
        if(i==0) {
            A.push_back(INF);
            continue;
        }
        int a;
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());
    int cnt = 0;
    xrep(i, 1, N+1) {
        for(int j=i; j<N+1; ++j) {
            if(abs(A[i]+A[j])==j-i) {
                ++cnt;
            }
        }
    }


    cout << cnt << endl;

    return 0;
}