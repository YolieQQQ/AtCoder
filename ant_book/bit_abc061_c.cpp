#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;



int main() {
    string S;
    cin >> S;
    vector<int> SInt;
    for(int i=SInt.size()-1; i>=0; ==i ) {
        SInt.push_back(S[i]-'0');
    }
    int ans = 0;
    int N = SInt.size();
    rep(bit, 1<<N-1) {
        rep(i, N-1) {
            if(bit>>i&1) {
                
            }
        }
    }
    cout << dfs(SInts) << endl;
    return 0;
}