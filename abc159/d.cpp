#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;



int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    rep(i, N) cin >> A[i];
    vector<int> ans;
    vector<int> countNums(N, 0);
    vector<int> sortNums;
    sortNums = A;
    sort(sortNums.begin(), sortNums.end());
    int target =sortNums[0];
    rep(i, N) {
        if(target==sortNums[i]) {
            countNums[target] += 1;
        }
        else {
            target = sortNums[i];
            countNums[target] += 1;
        }
    }
    vector<int> memo(N);
    rep(i, N) {
        int ans = 0;
        --countNums[i];
        for(int cnt: countNums) {
            ans += cnt*(cnt-1)/2;
        }
        memo[i] = ans;
        ++countNums[i];
    }
    rep(i, N) {
        int a = A[i];
        cout << memo[a] << endl;
    }
    return 0;
}