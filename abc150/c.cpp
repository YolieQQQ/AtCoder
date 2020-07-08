#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;


int main() {
<<<<<<< HEAD
    
=======
    int N;
    cin >> N;
    vector<int> P(N);
    vector<int> Q(N);
    rep(i, N) {
        cin >> P[i];
    }
    rep(i, N) { 
        cin >> Q[i];
    }
    vector<int> sorted;
    xrep(i, 1, N+1) {
        sorted.push_back(i);
    }
    map<vector<int>, int> mp;
    do {
        mp[sorted] = mp.size();
    } while(next_permutation(sorted.begin(), sorted.end()));

    int ans = abs(mp[P]-mp[Q]);
    cout << ans << endl;
>>>>>>> 55c56345048bd9abfab7a22096d483dc575b3ead
    return 0;
}