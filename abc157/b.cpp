#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define xrep(i,a,b) for(int i=int(a);i<int(b);++i)
using ll = long long;

vector<vector<int>> A(3);
vector<int> B;

bool bingo() {
    for(vector<int> as: A) {
        int cnt = 0;
        for(int a: as) {
            for(int b: B) {
                if(a==b) ++cnt;
            }
        }
        if(cnt==3) return true;
    }

    rep(i, 3) {
        rep(j ,3) {
            int cnt = 0;
            for(int b: B) {
                if(A[j][i]==b) ++cnt;
            }
        }
        if(cnt==3) return true;
    }

    rep(i, 3) {
        int cnt = 0;
        for(b: B) {
            if(A[i][i] == b) ++cnt;
        }
        if(cnt==3) return true;
    }

    



}

int main() {
    rep(i, 3) {
        vector<int> row(3);
        rep(j, 3) {
            cin >> row[j];
        }
        A[i] = row;
    }

    int N;
    cin >> N;
    rep(i, N) {
        int b;
        cin >> b;
        B.push_back(b);
    }

    return 0;
}
    
    