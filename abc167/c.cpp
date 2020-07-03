#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define xrep(i, a, b) for (int i = int(a); i < int(b); ++i)
using ll = long long;

const int INF = 100100100;
int N, M, X;
vector<vector<int>> A;
vector<int> C;

int minVec(vector<int> V) {
    int min = INF;
    for (auto v : V) {
        if (min > v) {
            min = v;
        }
    }
    return min;
}


int main() {
    cin >> N >> M >> X;
    vector<int> rowA;
    
    rep(i, N) {
        int c, a;
        cin >> c;
        C.push_back(c);
        rep(j, M) {
            cin >> a;
            rowA.push_back(a);
        }
        A.push_back(rowA);
        rowA = {};
    }
    
    vector<int> costs;
    for(int bit=0; bit<(1<<N); ++bit) {
        vector<int> nowSkill(M);
        int cost = 0;
        rep(i, N) {
            if(1&(bit>>i)) {    
                cost += C[i];
                rep(m, M) {
                    nowSkill[m] += A[i][m];
                }
            }
            else {
                continue;
            }
        }
        int c = 0;
        for(int s: nowSkill) {
            if(s<X) {
                break;
            }
            ++c;
        }
        if(c==M) {
            costs.push_back(cost);
        }
    }

    if(costs.size() == 0) {
        cout << -1 << endl;
        return 0;
    }
    
    cout << minVec(costs) << endl;


    return 0;
}